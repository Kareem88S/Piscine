/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:56:32 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 20:45:27 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	printable;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
		return ;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		printable = '0' + nb % 10;
		write(1, &printable, 1);
	}
	else
	{
		printable = '0' + nb;
		write(1, &printable, 1);
	}
	return ;
}

//int	main(void)
//{
//	ft_putnbr(-1235);	
//}
