/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_finder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 08:38:47 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 08:42:37 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
/*
Loop through the field from start to end, carrying a square.
In top-left corner start the search with mini square (1x1)
by calling the 'move_bsq' function. 
On success, take latest starting position to try next size square.
*/
int	bsq_finder(t_map *map)
{
	int	bsq_grew;

	map->bsq = 0;
	map->bsq_x = 0;
	map->bsq_y = 0;
	map->y = 0;
	while (map->y < map->height - map->bsq_y)
	{
		map->x = 0;
		while (map->x < map->width - map->bsq_x)
		{
			map->iterator = 0;
			while ((map->iterator < map->width - map->x)
				&& (map->bsq < bsq_grew))
			{
				bsq_grew = move_bsq(map->bsq, map);
				map->bsq = bsq_grew;
			}
			map->x++;
		}
		map->y++;
	}
	if (map->bsq == 0)
		// msg - no square of 1x1 possible "map error"
		return (-1);
	return (0);
}

/*
Moving through a portion of the field with a square of size bsq + 1.
If found, save coordinates, return and repeat with bigger square.
If not found, return with same size for next position.
*/
int	move_bsq(int cur_bsq, t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < cur_bsq + 1)
	{
		j = 0;
		while (j < cur_bsq + 1)
		{
			if (map->map[map->y][map->x] == map->obstacle)
				return (cur_bsq); // no square found
			j++;
		}
		i++;
	}
	// square found
	// coordinaten van links-boven hoek
	map->bsq_x = map->x;
	map->bsq_y = map->y;
	return (cur_bsq + 1);
}
