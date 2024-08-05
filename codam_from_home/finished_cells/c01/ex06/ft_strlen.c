/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:34:49 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 23:01:52 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

// int ft_strlen(char *str);

// int	main()
// {
// 	char c;
// 	c = '0' + ft_strlen("Hoi");
// 	write(1, &c, 1);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
