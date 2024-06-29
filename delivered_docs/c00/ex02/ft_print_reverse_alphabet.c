/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 21:48:27 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 20:51:51 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_print_reverse_alphabet(void);
// 
// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }

void	ft_print_reverse_alphabet(void)
{
	int		rev_alpha;
	char	letter;

	rev_alpha = 26 - 1;
	while (rev_alpha >= 0)
	{
		letter = 'a' + rev_alpha;
		write(1, &letter, 1);
		rev_alpha--;
	}
}
