/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:23:08 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 18:39:27 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_valid_input(t_map *map)
{
	if (((map->height == map->obstacle) || (map->height == map->empty_space)
			|| (map->height == map->to_place)))
		return (1);
	if ((map->obstacle == map->height) || (map->obstacle == map->empty_space)
		|| (map->obstacle == map->to_place))
		return (1);
	if ((map->to_place == map->height) || (map->to_place == map->empty_space)
		|| (map->to_place == map->obstacle))
		return (1);
	if ((map->height >= 0 && map->height <= 31)
		|| (map->obstacle >= 0 && map->obstacle <= 31)
		|| (map->to_place >= 0 && map->to_place <= 31))
		return (1);
	return (0);
}
