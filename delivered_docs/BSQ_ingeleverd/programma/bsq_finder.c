/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_finder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:52:03 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 22:16:57 by kasherif         ###   ########.fr       */
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

	while (map->y < map->height - map->bsq_y)
	{
		map->x = 0;
		while (map->x < map->width - map->bsq_x)
		{
			bsq_grew = map->bsq + 1;
			map->iterator = 0;
			while ((map->iterator < map->width - map->x)
				&& (map->bsq < bsq_grew))
			{
				bsq_grew = move_bsq(map->bsq, map);
				map->bsq = bsq_grew;
				map->iterator++;
			}
			map->x++;
		}
		map->y++;
	}
	if (map->bsq == 0)
		return (map_error());
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
			{
				return (check_for_obstacle(map, cur_bsq));
			}
			j++;
		}
		i++;
	}
	map->bsq_x = map->x;
	map->bsq_y = map->y;
	return (cur_bsq + 1);
}

int	check_for_obstacle(t_map *map, int cur_bsq)
{
	if (map->x + 1 < map->width + map->bsq)
		map->x++;
	else
	{
		map->x = 0;
		map->y++;
	}
	return (cur_bsq);
}
