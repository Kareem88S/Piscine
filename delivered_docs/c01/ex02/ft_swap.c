/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 00:21:39 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/07 00:44:14 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

// int	main(void)
// {
// 	int a = 2;
// 	int b = 5;
// 	printf("a = %i\n", a);
// 	ft_swap(&a, &b);
// 	printf("a = %i\n", a);
// }