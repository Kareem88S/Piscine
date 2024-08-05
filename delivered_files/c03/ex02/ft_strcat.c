/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:52:47 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 15:52:47 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// char *ft_strcat(char *dest, char *src);

// int main()
// {
//     char *s2 = "Shj";
//     char s1[20] = "Shi & ";

//     printf("new string: %s\n", ft_strcat(s1, s2));

// }

char	*ft_strcat(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	if (*dest)
		while (*dest)
			dest++;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p_dest);
}
