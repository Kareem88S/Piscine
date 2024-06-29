/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:47:01 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 20:48:43 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int	is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

char	*skip_space(char *str)
{
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
	{
		str++;
	}
	return (str);
}

char	*skip_sign(char *str, int *sign)
{
	*sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			*sign = -*sign;
		}
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	out;
	int	sign;

	str = skip_space(str);
	str = skip_sign(str, &sign);
	out = 0;
	while (is_digit(*str))
	{
		out *= 10;
		out += *str - '0';
		str++;
	}
	return (out * sign);
}
