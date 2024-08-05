/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 08:14:04 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 23:25:47 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "ft_strdup.h"
#include "ft_atoi.h"
#include "error.h"
#include "bool.h"

t_error	read_line(int fd, char *line, t_list **list, int *bytes_read)
{
	int		i;
	char	c;

	i = 0;
	c = '\0';
	while (c != '\n')
	{
		*bytes_read = read(fd, &c, 1);
		if (*bytes_read < 0)
		{
			return (show_error(ERROR_INVALID_DICT));
		}
		if (*bytes_read == 0)
			break ;
		line[i++] = c;
	}
	if (i == 0)
		return (ERROR_NONE);
	line[--i] = '\0';
	i = read_dictionary_line(line, list);
	if (is_error(i))
		return (i);
	return (ERROR_NONE);
}

t_bool	trim_right(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	length--;
	while (length >= 0 && str[length] == ' ')
	{
		length--;
	}
	if (length < 0)
	{
		return (FALSE);
	}
	length++;
	str[length] = '\0';
	return (TRUE);
}

t_list	*create_new_node(t_key key, char *value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = key;
	new_node->value = ft_strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (!trim_right(new_node->value))
	{
		free(new_node->value);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

t_bool	append_node(t_list **head, t_key key, char *value)
{
	t_list	*new_node;

	new_node = create_new_node(key, value);
	if (new_node == NULL)
	{
		return (FALSE);
	}
	new_node->next = *head;
	*head = new_node;
	return (TRUE);
}

void	free_list(t_list *head)
{
	t_list	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->value);
		free(temp);
	}
}
