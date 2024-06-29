/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:42:27 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/26 12:42:27 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void ft_putstr(char *str);

// int main()
// {
//     char *str = "Hello";

//     ft_putstr(str);
// }

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
	return ;
}
