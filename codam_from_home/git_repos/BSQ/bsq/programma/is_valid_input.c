/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:23:08 by dbank             #+#    #+#             */
/*   Updated: 2024/06/25 21:12:36 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_valid_input(char *input, t_map *map)
{
	int	i;
	int	length;
	int	b;

	i = 5;
	b = 0;
	length = 0;
	while (input[i] != '\n')
	{
		length++;
		i++;
	}
	i++;
	while (input[i] != '\0')
	{
		if (input[i] == '\n' && b == length)
			b = -1;
		else if (input[i] == '\n' && b != length)
			return (1);
		i++;
		b++;
	}
	i = 5;
// check if every parameter is unique
	if (((map->height == map->obstacle) || (map->height == map->empty_space)
			|| (map->height == map->to_place)))
		return (1);
	if ((map->obstacle == map->height) || (map->obstacle == map->empty_space)
		|| (map->obstacle == map->to_place))
		return (1);
	if ((map->to_place == map->height) || (map->to_place == map->empty_space)
		|| (map->to_place == map->obstacle))
		return (1);
	return (0);
}
