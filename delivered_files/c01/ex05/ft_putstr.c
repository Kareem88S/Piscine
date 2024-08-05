/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:34:25 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 15:47:13 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_putstr(char *str);

// int main()
// {
// 	ft_putstr("hoi");
// }

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	return ;
}
