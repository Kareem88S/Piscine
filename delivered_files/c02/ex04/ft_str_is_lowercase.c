/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:59:17 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/13 14:59:17 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//int ft_str_is_lowercase(char *str);

//int main(void)
//{
//    char *str = "hallo daar";
//    char swtch; 
//    swtch = '0' + ft_str_is_lowercase(str);
//    write(1, &swtch, 1);
//    return 0;
//}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
