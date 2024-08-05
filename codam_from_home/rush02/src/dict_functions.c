/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:46:18 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 23:37:28 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict_functions.h"
#include "ft_atoi.h"
#include "list.h"

t_bool	is_key_equal(t_key a, t_key b)
{
	return (a.type == b.type && a.value == b.value);
}

char	*get_number_word(t_list *list, t_key key)
{
	if (!list)
	{
		return (NULL);
	}
	if (is_key_equal(list->key, key))
	{
		return (list->value);
	}
	return (get_number_word(list->next, key));
}

t_error	read_dictionary_line(char *line, t_list **list)
{
	t_key_type	key_type;
	int			i;
	t_key		key;

	i = 1;
	key_type = KEY_TYPE_NUMBER;
	if (line[0] == '1')
		while (line[i++] == '0' || !line[i - 1])
			key_type = KEY_TYPE_POWER_OF_TEN;
	if (line[0] == '1' && line[1] == '0' && (line[2] < '0' || line[2] > '9'))
		key_type = KEY_TYPE_NUMBER;
	i = 0;
	while (line[i] && line[i] != ':')
		i++;
	if (line[i++] != ':')
		return (show_error(ERROR_INVALID_DICT));
	while (line[i] == ' ')
		i++;
	key.type = key_type;
	key.value = i - 2;
	if (key_type == KEY_TYPE_NUMBER)
		key.value = ft_atoi(line);
	if (!append_node(list, key, &line[i]))
		return (show_error(ERROR_INVALID_DICT));
	return (ERROR_NONE);
}

t_error	read_dictionary_file(int fd, t_list **list)
{
	char	line[1024];
	t_error	result;
	int		bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		result = read_line(fd, line, list, &bytes_read);
		if (is_error(result))
		{
			close(fd);
			return (result);
		}
	}
	if (bytes_read < 0)
	{
		close(fd);
		return (show_error(ERROR_INVALID_DICT));
	}
	close(fd);
	return (ERROR_NONE);
}
