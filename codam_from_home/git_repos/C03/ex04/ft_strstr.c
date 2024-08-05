/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:52:59 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 15:52:59 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
// // 	find string within string
// // future improvements:
// //      more efficient substring search algorithms like 
// //      KMP (Knuth-Morris-Pratt), 
// //		Boyer-Moore, or Rabin-Karp in future optimizations

// char *ft_strstr(char *str, char *to_find);

// int main()
// {
//     char    stack[] = "Lets find the needle in the haystack";
//     char    *needle = "needle";
//     char    *result = ft_strstr(stack, needle);

//     if (result)
//         printf("%s\n", result);
//     else
//         printf("not found");

// }

char	*ft_strstr(char *str, char *to_find)
{
	int	size_needle;
	int	i;
	int	j;

	j = 0;
	i = 0;
	size_needle = 0;
	while (to_find[size_needle] != '\0')
		size_needle++;
	if (size_needle == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && j < size_needle)
		{
			if (j + 1 == size_needle)
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
