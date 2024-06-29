/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:59:00 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 14:59:00 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char *ft_strncpy(char *dest, char *src, unsigned int n);

// int main(void)
// {
//     char *src = "ahoi daar hahahaha";
//     char dest[12];
//     unsigned int n;

//     n =11;
//     ft_strncpy(dest, src, n);
// /*      n = sizeof(dest) - 1;            ideal use to null terminate
//         dest[sizeof(dest) - 1] = '\0';
//  */    
//     printf("%s\n", dest);
//     return 0;

// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*address;
	unsigned int	i;

	i = 0;
	address = dest;
	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (address);
}
