/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:46:59 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 20:49:09 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fputstr.h"
#include <unistd.h>

void	ft_fputstr(int fd, char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	write(fd, str, count);
}
