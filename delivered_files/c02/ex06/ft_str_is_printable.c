/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:32:53 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/18 21:30:39 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// int ft_str_is_printable(char *str);

// int main()
// {
// 	char str[] = "hello3242";
// 	printf("%i\n", ft_str_is_printable(str));
// }

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 0 && *str++ <= 31) || *str == 127)
			return (0);
	}
	return (1);
}
