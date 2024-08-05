/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:39:16 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 23:05:13 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

// void ft_rev_int_tab(int *tab, int size);

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
// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	write (1, "\n", 1);
// 	while (i < size)
// 	{
// 		c = '0';
// 		c = c + tab[i];
// 		write(1, &c, 1);
// 		i++;
// 	}
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = temp;
		i++;
	}
	return ;
}
