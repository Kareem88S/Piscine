/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:53:03 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 15:53:03 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	while (*src++ != '\0')
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main(void)
// {
// 	char	dest[10] = "Hello, ";
// 	char 	src[] = "people!";
// 	unsigned int	size = 20;
// 	unsigned int result = ft_strlcat(dest, src, size);
// 	printf ("Size of dest + src: %u characters \n", result);
// 	printf("Destination: %s\n", dest);
// 	return(0);
// }