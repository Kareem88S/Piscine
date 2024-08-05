/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 08:38:43 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 08:38:43 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

/*
replaces placable markers in BSQ location instead of free space characters
*/
void	write_bsq_in_field(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map->bsq)
	{
		x = 0;
		while (x < map->width)
		{
			map->map[map->bsq_x + x][map->bsq_y + y] = map->to_place;
			x++;
		}
		y++;
	}
	return ;
}

void	field_printer(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			write(1, &map->map[y][x], 1);
		}
	}
}
