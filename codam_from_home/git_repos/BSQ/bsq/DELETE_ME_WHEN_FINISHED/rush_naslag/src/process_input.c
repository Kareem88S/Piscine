/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 23:02:38 by mpeters           #+#    #+#             */
/*   Updated: 2024/06/23 23:02:40 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "process_input.h"
#include "list.h"
#include "dict_functions.h"
#include "ft_fputstr.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_create_key(t_list *list, int id, t_key_type t)
{
	t_key	lookup_key;

	lookup_key.type = t;
	lookup_key.value = id;
	ft_fputstr(1, get_number_word(list, lookup_key));
	write(1, " ", 1);
}

void	ft_print_chunk(t_list *list, char *str, int chunk_size)
{
	char	teen;

	while (chunk_size > 0)
	{
		if ((chunk_size != 2) && (*str != 48))
			ft_create_key(list, *str - 48, KEY_TYPE_NUMBER);
		if (chunk_size == 3)
			ft_create_key(list, 3, KEY_TYPE_POWER_OF_TEN);
		if (chunk_size == 2)
		{
			if (str[0] != '0')
			{
				if (str[0] < '2')
				{
					teen = ((str[0] - 48) * 10) + str[1] - 48;
					ft_create_key(list, teen, KEY_TYPE_NUMBER);
					chunk_size--;
				}
				else
					ft_create_key(list, (*str - 48) * 10, KEY_TYPE_NUMBER);
			}
		}
		str++;
		chunk_size--;
	}
}

void	ft_process_nbr(t_list *list, char *nbr_str)
{
	int		chunk_len;
	int		str_len;

	while (*nbr_str == '0')
		nbr_str++;
	str_len = ft_strlen(nbr_str);
	chunk_len = str_len % 3;
	if (chunk_len == 0)
		chunk_len = 3;
	if (str_len != 0)
	{
		ft_print_chunk(list, nbr_str, chunk_len);
	}
	str_len -= chunk_len;
	if (str_len > 0)
	{
		ft_create_key(list, str_len + 1, KEY_TYPE_POWER_OF_TEN);
		ft_process_nbr(list, nbr_str + chunk_len);
	}
}
