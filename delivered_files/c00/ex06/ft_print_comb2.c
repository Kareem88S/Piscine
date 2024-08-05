/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:20:27 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 20:51:35 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
int		ft_power(int pow, int current_number);

//int	main(void)
//{
//	ft_print_comb2();
//	return (0);
//}

void	ft_print_comb2(void)
{
	int		current_number;
	int		final_number;
	int		i;
	char	temp;

	final_number = 9899;
	current_number = 0;
	while (current_number <= final_number)
	{
		i = 0;
		if (current_number / 100 < current_number % 100)
		{
			while (i < 4)
			{
				temp = '0' + ft_power(i, current_number);
				write(1, &temp, 1);
				i++;
				if (i == 2)
					write(1, " ", 1);
			}
			if (current_number != 9899)
				write(1, ", ", 2);
		}
		current_number++;
	}
}

int	ft_power(int pow, int current_number)
{
	if (pow == 0)
		return (current_number / 1000);
	if (pow == 1)
		return ((current_number / 100) % 10);
	if (pow == 2)
		return ((current_number % 100) / 10);
	if (pow == 3)
		return (current_number % 10);
	return (0);
}
