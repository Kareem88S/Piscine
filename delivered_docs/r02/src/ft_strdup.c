/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:47:02 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 20:49:38 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strdup.h"
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		length;
	char	*res;
	int		i;

	length = 0;
	while (str[length])
	{
		length++;
	}
	res = malloc(length + 1);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
