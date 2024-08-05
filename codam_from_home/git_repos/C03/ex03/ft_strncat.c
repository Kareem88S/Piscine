/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:52:54 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 15:52:54 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 #include <stdio.h>
 #include <string.h>

 char *ft_strncat(char *dest, char *src, unsigned int nb);

//  int main()
//  {
//      int size = 8;
//      char *s2 = "Shj";
//      char s1[9] = "Shi & ";

//      printf("new string: %s\n", ft_strncat(s1, s2, size));
//  }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	j;

	dest_len = 0;
	j = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	while (dest[dest_len + j] != '\0')
	{
		dest[dest_len + j] = '\0';
		j++;
	}
	return (&dest[0]);
}
