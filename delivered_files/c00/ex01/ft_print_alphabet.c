/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 21:46:37 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 20:51:50 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		alphabet;
	char	letter;
	int		i;

	alphabet = 26;
	i = 0;
	while (i < alphabet)
	{
		letter = 'a' + i++;
		write(1, &letter, 1);
	}
	return ;
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }