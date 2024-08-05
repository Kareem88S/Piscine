/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:26:18 by dbank             #+#    #+#             */
/*   Updated: 2024/06/25 20:15:47 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char *argv[])
{
	int		fd;
	int		i;
	t_map	onze_map;
	int		map_success;

	(void)map_success;
	// Djax, kun je fuctie schrijven voor: check correct input (argc+++)
	// Djax: "yes!"
/* 	if (is_valid_input(argv[1]) == 1)
		{
			write(2, "ERROR, input invalid", 20);
			return (1);
		} */
	i = 1;
	while (i < argc)
	{
		fd = open_file(argv[i]);
		if (fd == -1)
		{
			write(2, "ERROR: failed to open file\n", 27);
			return (1);
		}
		if (read_map_file(fd, &onze_map) == -1)
		{
			write(2, "ERROR: failed to read file\n", 27);
			close (fd);
			return (1);
		}
		map_success = bsq_finder(&onze_map);
		i++;
	}
	return (0);
}

int	malloc_d_array_map(t_map *map)
{
	int	i;

	map->map = NULL;
	map->map = (char**) malloc(map->height * sizeof(char *));
	if (map->map == NULL)
		return (-1); // error
	i = 0;
	while (i < map->height)
	{
		map->map[i] = NULL;
		map->map[i] = (char *) malloc(map->width * sizeof(char));
		if (map->map == NULL)
		{
			free_all(map);
			return (-1); // error
		}
		i++;
	}
	return (0);
}

void	free_all(t_map *map)
{
	int	i;

	if (map->map == NULL)
		return ;
	i = 0;
	while (i < map->height)
	{
		if (map->map[i] != NULL)
			free(map->map[i]);
		i++;
	}
	free(map->map);
	return ;
}

int	is_error(int check)
{
	if (check < 0)
		return (-1);
	return (0);
}
