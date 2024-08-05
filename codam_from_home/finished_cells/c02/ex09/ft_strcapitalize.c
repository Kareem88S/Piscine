/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:59:47 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 14:59:47 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);
int		handle_alpha(char *c, int word_pos);

//int main(void)
////{
////// char str[] = "hiHi HAHah well capitalize that stuff";
//	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinq+et+un";
//	char *start;

//	start = str;
//	while (*start)
//	{
//		write(1, start, 1);
//		start++;
//	}
//	write(1, "\n", 1);

//	start = str;
//	ft_strcapitalize(str);

//	while (*start)
//	{
//		write(1, start, 1);
//		start++;
//	}
//	return 0;
//}

int	handle_alpha(char *c, int word_pos)
{
	if (word_pos == 1)
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
			return (0);
		}
		else if (*c >= 'A' && *c <= 'Z')
			return (0);
	}
	else if (word_pos == 0)
	{
		if (*c >= 'a' && *c <= 'z')
			return (0);
		else if (*c >= 'A' && *c <= 'Z')
		{
			*c = *c + 32;
			return (0);
		}
	}
	return (word_pos);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		new_word = handle_alpha(&str[i], new_word);
		if (str[i] >= '0' && str[i] <= '9')
			new_word = 0;
		if (str[i] >= '!' && str[i] <= '/')
			new_word = 1;
		if (str[i] == ' ')
			new_word = 1;
		if (str[i] >= ':' && str[i] <= '@')
			new_word = 1;
		i++;
	}
	return (&str[0]);
}
