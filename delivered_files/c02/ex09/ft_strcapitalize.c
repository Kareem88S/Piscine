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

// #include <unistd.h>

char	*ft_strcapitalize(char *str);
void	str_low(char *str);

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

void	str_low(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;

	str_low(str);
	new_word = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			new_word = 0;
		if ((*str <= 47) || (*str >= ':' && *str <= '@'))
			new_word = 1;
		if ((*str >= 91 && *str <= 96) || (*str >= ':' && *str <= '@'))
			new_word = 1;
		if (new_word == 1)
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 32;
		if (new_word == 0)
			if (*c >= 'A' && *c <= 'Z')
				*c = *c + 32;
		str++;
	}
	return (&str[0]);
}
