/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:58:53 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 14:58:53 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char *ft_strcpy(char *dest, char *src);

// int main()
// {
//     char *src = "ahoi daar";
//     char dest[10];
//     ft_strcpy(dest, src);
//     printf("%s\n", dest);
//     return(0);
// }

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start_address;

	dest_start_address = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest_start_address);
}
