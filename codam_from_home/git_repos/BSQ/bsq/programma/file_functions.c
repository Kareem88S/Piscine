/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:25:58 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 08:45:58 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	open_file(char *av)
{
	int	fd;

	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (-1); // error
	return (fd);
}

int	read_map_file(int fd, t_map *map)
{
	char	temp_first_line[100];
	int		bytes_read;

	if (read_header(fd, map, &bytes_read) == -1) // tot hier goed
		return (-1);
	if (read_first_line(fd, temp_first_line, map, &bytes_read) == -1)
		return (-1);
	if (malloc_d_array_map(map) == -1)
		return (1); // error
	ft_strcpy(map->map[0], temp_first_line);
	// continue reading and copying into struct
	if (read_other_lines(fd, map, &bytes_read) == -1)
		return (1);
	close(fd);
	if (bytes_read < 0)
	{
		close(fd);
		return (-1); // error
	}
	print_map(map); // test ---------------------------------------------
	return (0);
}

int	read_other_lines(int fd, t_map *map, int *bytes_read)
{
	int	i;
	int	result;

	i = 1;// want eerste line al
	while (i < map->height)
	{
		result = read_line(fd, map->map[i], bytes_read);
		if (result < 0)
			return (-1);
		i++;
	}
	return (0);
}

int	read_line(int fd, char *line, int *bytes_read)
{
	int		i;
	char	c;

	i = 0;
	c = '\0';
	while (c != '\n')
	{
		*bytes_read = read(fd, &c, 1);
		if (*bytes_read == 0)
		{
			return (-1); // error
		}
		line[i++] = c;
	}
	line[i] = '\0'; // \0 ipv \n
	if (i == 0 && *bytes_read <= 0)
		return (-1);
	return (i);
}

// hier duwtje voorbij \n als lege map
int	read_first_line(int fd, char *first_line, t_map *map, int *bytes_read)
{
	int		i;
	char	c;

	// misschien bytes read -5
	i = 0;
	c = '\0';
	while (c != '\n' && *bytes_read > 0) // hier duwtje voorbij \n als lege map
	{
		*bytes_read = read(fd, &c, 1);
		if (*bytes_read > 0)
			first_line[i++] = c;
	}
	if (c == '\n' && *bytes_read > 0)
		first_line[--i] = '\0'; // of miss i + 1
	printf("print top line: %s\n", first_line);
	map->width = i;
	printf("width: %i\n", i);
	printf("height: %i\n", map->height);
	if (i == 0 && *bytes_read <= 0)
		return (-1);
	return (i);
}

int	read_header(int fd, t_map *map, int *bytes_read)
{
	int		i;
	char	c;

	i = 0;
	c = '\0';
	while (i < 4)
	{
		*bytes_read = read(fd, &c, 1);
		if (*bytes_read <= 0)
			return (-1); // error
		if (i == 0)
			// if (!(i+1 >= '0' <= '9'))
			// {
			// 	c = findheight();
			// 	map->height = c;
			// }
			// else 
			map->height = c - '0';
		else if (i == 1)
			map->empty_space = c;
		else if (i == 2)
			map->obstacle = c;
		else if (i == 3)
			map->to_place = c;
		i++;
	}
	*bytes_read = read(fd, &c, 1);
	return (0);
}
