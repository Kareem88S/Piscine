/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:09:12 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 23:06:09 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_sort_int_tab(int *tab, int size);

// int	main()
// {
// 	int i = 0;
// 	int tab[] = {5,2,1,7,5};
// 	int size = 5;
// 	char c;

// 	while (i < size)
// 	{
// 		c = '0';
// 		c = c + tab[i++];
// 		write(1, &c, 1);
// 	}
// 	ft_sort_int_tab(tab, size);
// 	i = 0;
// 	write (1, "\n", 1);
// 	while (i < size)
// 	{
// 		c = '0';
// 		c = c + tab[i++];
// 		write(1, &c, 1);
// 	}
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	i = 0;
	while (i < size - 1)
	{
		j = 0 + i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	return ;
}
