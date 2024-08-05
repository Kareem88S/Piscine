/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:26:01 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 22:27:06 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	header_into_map(char *temp, t_map *map, int header_len)
{
	int	i;

	i = 0;
	map->to_place = temp[header_len - 1];
	map->obstacle = temp[header_len - 2];
	map->empty_space = temp[header_len - 3];
	map->height = temp[i] - '0';
	i++;
	while (temp[i] != temp[header_len - 3])
	{
		map->height = map->height * 10 + (temp[i] - '0');
		i++;
	}
	return ;
}

void	initialize_struct(t_map *map)
{
	map->bsq = 0;
	map->bsq_x = 0;
	map->bsq_y = 0;
	map->y = 0;
}
