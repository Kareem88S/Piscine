/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:25:58 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 22:26:29 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	read_map_file(int fd, t_map *map)
{
	char	temp_first_line[100];
	int		bytes_read;

	if (read_header(fd, map, &bytes_read) == -1)
		return (-1);
	if (read_first_line(fd, temp_first_line, map, &bytes_read) == -1)
		return (-1);
	if (malloc_d_array_map(map) == -1)
		return (1);
	ft_strcpy(map->map[0], temp_first_line);
	if (read_other_lines(fd, map, &bytes_read) == -1)
		return (1);
	close(fd);
	if (bytes_read < 0)
	{
		close(fd);
		return (-1);
	}
	print_map(map);
	return (0);
}

int	read_other_lines(int fd, t_map *map, int *bytes_read)
{
	int	i;
	int	result;

	i = 1;
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
			return (-1);
		}
		line[i++] = c;
	}
	line[i] = '\0';		// is hier line[i - 1] niet al '\n' ? 11-07-24 ** nee volgens mij niet. s.d.
	if (i == 0 && *bytes_read <= 0)
		return (-1);
	return (i);
}

int	read_first_line(int fd, char *first_line, t_map *map, int *bytes_read)
{
	int		i;
	char	c;

	i = 0;
	c = '\0';
	while (c != '\n' && *bytes_read > 0)
	{
		*bytes_read = read(fd, &c, 1);
		if (*bytes_read > 0)
			first_line[i++] = c;
	}
	if (c == '\n' && *bytes_read > 0)
		first_line[--i] = '\0';
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
	int		header_len;
	char	temp[10];

	i = 0;
	c = '\0';
	header_len = 0;
	while (c != '\n')
	{
		*bytes_read = read(fd, &c, 1);
		if (*bytes_read <= 0)
			return (-1);
		if (c != '\n')
		{
			temp[header_len] = c;
			header_len++;
		}
	}
	header_into_map(temp, map, header_len);
	return (0);
}
