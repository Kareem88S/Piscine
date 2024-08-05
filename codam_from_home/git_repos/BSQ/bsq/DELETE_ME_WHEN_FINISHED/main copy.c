/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:26:18 by dbank             #+#    #+#             */
/*   Updated: 2024/06/24 20:21:59 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char *argv[])
{
	int		fd;
	int		i;
	t_map	onze_map;
	int		map_success;

	i = 1;
	// check correct input
	while (i < argc)
	{
		fd = open_file(argc, argv[i]);
		if (fd == -1)
			// error msg
			return (1);
		map_success = read_map_file(fd, &onze_map);
		if (map_success == -1)
		// error
			close (fd);
		i++;
	}
	// free map_arr + contents
}

int	open_file(int ac, char *av)
{
	int	fd;

	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (-1);
	return (fd);
}

int	read_map_file(int fd, t_map *map, char **map_arr)
{
	char	temp[100];
	int		result;
	int		bytes_read;
	int		str_len;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		// read header --> to struct, empty, obstruction, to_place, height.
		// place contents in struct
		result = read_header(fd, map, &bytes_read);
		if (result == -1)
			return (-1);
		// read first line to get lwidth --> struct width
		// store in temp string + calc str_len
		result = read_first_line(fd, temp, map, &bytes_read);
		if (result == -1)
			return (-1);
		// malloc double array
		if (malloc_d_array_map(map) == -1)
			return (1); // error
		// copy temp in first string in struct
		ft_strcpy(map->map[0], temp);
		// continue reading and copying into struct
		result = read_line(fd, map, map, &bytes_read);
		if (is_error(result))
		{
			close(fd);
			return (result);
		}
	}
	if (bytes_read < 0)
	{
		close(fd);
		return (-1); // error
	}
	close(fd);
	//return (-1); // return 0 for success
	return (0);
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
	first_line[i] = '\0'; // of miss i + 1
	printf("print top line: %s\n", first_line);
	//line[--i] = '\0';
	map->width = i;
	printf("width: %i\n", i);
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
		if (*bytes_read < 0)
			return (-1); // error
		if (*bytes_read == 0)
			break ;
		if (i == 0)
			map->height = c - '0';
		else if (i == 1)
			map->empty_space = c;
		else if (i == 2)
			map->obstacle = c;
		else if (i == 3)
			map->to_place = c;
		i++;
	}
	if (i == 0)
		return (-1);
	return (i);
}

int	malloc_d_array_map(t_map *map)
{
	int	i;

	map->map = (char**) malloc(map->height * sizeof(char *));
	// if malloc errors ..
	i = 0;
	while (i < map->height)
	{
		map->map[i] = (char *) malloc(map->width * sizeof(char));
		// if malloc fails..
		i++;
	}
}

int	read_line(int fd, char *line, t_map *map, int *bytes_read) // line kan weg
{
	int		i;
	int		j;
	char	c;

	i = 1;
	j = 0;
	c = '\0';
	while (c != '\n')
	{
		*bytes_read = read(fd, &c, 1);
		if (*bytes_read < 0)
		{
			return (-1); // error
		}
		map->map[i][j] = c;
	}
	line[--i] = '\0';
	i = read_dictionary_line(line, list);
	if (is_error(i))
		return (i);
	return (-1);
}
