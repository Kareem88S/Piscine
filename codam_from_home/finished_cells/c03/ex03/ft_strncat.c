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

// #include <unistd.h>
// #include <stdio.h>

// char *ft_strncat(char *dest, char *src, unsigned int nb);

// int main()
// {
//     int size = 8;
//     char *s2 = "Shj";
//     char s1[9] = "Shi & ";

//     printf("new string: %s\n", ft_strncat(s1, s2, size));
// }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		cur_dest_str_size;
	int		actual_dest_size;
	int		j;
	char	*p_dest;

	p_dest = dest;
	actual_dest_size = nb;
	cur_dest_str_size = 0;
	j = 0;
	while (dest[cur_dest_str_size] != '\0')
		cur_dest_str_size++;
	while (src[j] != '\0' && (j + cur_dest_str_size) < actual_dest_size)
	{
		dest[cur_dest_str_size + j] = src[j];
		j++;
	}
	dest[cur_dest_str_size + j] = '\0';
	return (p_dest);
}
