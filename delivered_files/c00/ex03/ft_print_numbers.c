/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:00:13 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/06 23:22:47 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_print_numbers(void);

// int	main(void)
// {
// 	ft_print_numbers();
// }

void	ft_print_numbers(void)
{
	char	number;
	int		i;

	i = 0;
	while (i < 10)
	{
		number = '0' + i;
		write(1, &number, 1);
		i++;
	}
}
