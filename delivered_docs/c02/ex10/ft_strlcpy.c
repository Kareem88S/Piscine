/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:59:51 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 14:59:51 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
// char            *ft_memcpy(char *dest, char *src, unsigned int to_copy);

// int main()
// {
//     unsigned int    to_copy = 8;
//     unsigned int    len = 0;
//     char            dest[15];
//     char            *star = "src45 89P";

//     len = ft_strlcpy(dest, star, to_copy);
//     printf("%s\n", dest);
//     printf("len = %u\n", len);
// }

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	to_copy;
	char			*address;
	unsigned int	i;

	i = 0;
	address = src;
	srclen = 0;
	while (*address++)
		srclen++;
	to_copy = srclen;
	if (size != 0)
	{
		if (to_copy >= size)
			to_copy = size - 1;
		while (i < to_copy)
		{
			dest[i] = src[i];
			i++;
		}
		dest[to_copy] = '\0';
	}
	return (srclen);
}

//		// ft_memcpy(dest, src, to_copy);

// char    *ft_memcpy(char *dest, char *src, unsigned int to_copy)
// {
//     int i;

//     i = 0;
//     while (i < to_copy)
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     return (dest);
// }