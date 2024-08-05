/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:59:35 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 14:59:35 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

// char *ft_strupcase(char *str);

// int main(void)
// {
//     char str[] = "Hahah";
//     char *start;

//     start = str;
//     while (*start)
//     {
//         write(1, start, 1);
//         start++;
//     }
//     start = str;
//     ft_strupcase(str);
//     while (*start)
//     {
//         write(1, start, 1);
//         start++;
//     }
//     return 0;
// }

char	*ft_strupcase(char *str)
{
	char	*address;

	address = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (address);
}
