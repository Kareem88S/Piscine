/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:59:40 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 14:59:40 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

// char *ft_strlowcase(char *str);

// int main(void)
// {
//     char str[] = "HAHah";
//     char *start;

//     start = str;
//     while (*start)
//     {
//         write(1, start, 1);
//         start++;
//     }

//     start = str;
//     ft_strlowcase(str);

//     while (*start)
//     {
//         write(1, start, 1);
//         start++;
//     }
//     return 0;
// }

char	*ft_strlowcase(char *str)
{
	char	*address;

	address = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (address);
}
