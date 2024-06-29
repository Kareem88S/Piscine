/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:26:18 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 22:18:50 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char *argv[])
{
	int		fd;
	int		i;
	t_map	onze_map;

	i = 1;
	while (i < argc)
	{
		fd = open_file(argv[i]);
		if (fd == -1)
			return (error_file_open());
		if (read_map_file(fd, &onze_map) == -1)
		{
			close (fd);
			return (error_file_read());
		}
		initialize_struct(&onze_map);
		if (bsq_finder(&onze_map) == -1)
			return (bsq_finder_error());
		write_bsq_in_field(&onze_map);
		field_printer(&onze_map);
		i++;
	}
	return (0);
	if (is_valid_input(&onze_map) == 1)
		return (error_file_open());
}

int	malloc_d_array_map(t_map *map)
{
	int	i;

	map->map = NULL;
	map->map = malloc(map->height * sizeof(char *));
	if (map->map == NULL)
		return (malloc_error());
	i = 0;
	while (i < map->height)
	{
		map->map[i] = NULL;
		map->map[i] = (char *) malloc(map->width * sizeof(char));
		if (map->map == NULL)
		{
			free_all(map);
			return (malloc_error());
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

int	open_file(char *av)
{
	int	fd;

	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (-1);
	return (fd);
}
