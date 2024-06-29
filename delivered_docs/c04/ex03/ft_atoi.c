/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:43:06 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/26 12:43:06 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

char	*skip_whitespace(char *str)
{
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	return (str);
}

char	*skip_sign(char *str, int *sign)
{
	*sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	out;
	int	sign;

	str = skip_whitespace(str);
	str = skip_sign(str, &sign);
	out = 0;
	while (ft_is_digit(*str))
	{
		out *= 10;
		out += *str - '0';
		str++;
	}
	return (out * sign);
}
