/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:07:39 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 20:46:16 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_is_negative(int n);

// int	main(void)
// {
// 	int	n;

// 	n = 5;
// 	ft_is_negative(n);
// }

void	ft_is_negative(int n)
{
	char	x;

	if (n < 0)
		x = 'N';
	else
		x = 'P';
	write (1, &x, 1);
	return ;
}
