/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:14:26 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 20:45:23 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }

// print all up to 789 (first column can never be larger than the next).
void	ft_print_comb(void)
{
	int		current_number;
	int		final_number;
	char	digits[3];
	int		digit_pos;

	current_number = -1;
	final_number = 789;
	while (++current_number <= final_number)
	{
		digit_pos = 0;
		digits[0] = '0' + current_number / 100;
		digits[1] = '0' + current_number / 10 % 10;
		digits[2] = '0' + current_number % 10;
		if (digits[0] < digits[1] && digits[1] < digits[2])
		{
			while (digit_pos < 3)
				write(1, &digits[digit_pos++], 1);
			if (current_number != 789)
				write(1, ", ", 2);
		}
	}
}
