/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:52:30 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 20:51:17 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gbd --> json file [gbd] enter

#include <unistd.h>

void	ft_print_combn(int n);
void	start_combination(int start, int depth, int n, char combination[]);

//int	main(void)
//{
//	int	input;

//	input = 8;
//	if (input > 9)
//		return (1);
//	ft_print_combn(input);
//	return (0);
//}

void	ft_print_combn(int n)
{
	char	combination[9];

	start_combination(0, 0, n, combination);
}

void	start_combination(int start, int depth, int n, char combination[])
{
	int	i;
	int	j;

	if (depth == n)
	{
		j = 9;
		write(1, combination, n);
		if (!(combination[0] == (10 - n) + '0'))
			write(1, ", ", 2);
		return ;
	}
	else
	{
		i = start;
		while (i <= 9 - (n - (depth + 1)))
		{
			combination[depth] = '0' + i;
			start_combination(i + 1, depth + 1, n, combination);
			i++;
		}
	}
}
