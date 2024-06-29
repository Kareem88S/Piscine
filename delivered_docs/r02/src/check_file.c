/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:46:15 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 20:47:40 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_error	correct_nbr_len_input(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i] > '9' || av[i] < '0')
			return (show_error(ERROR_INVALID_NUMBER));
		i++;
	}
	return (i);
}
