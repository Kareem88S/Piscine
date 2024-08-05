/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 08:04:28 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 22:31:31 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "error.h"

typedef enum e_key_type
{
	KEY_TYPE_NUMBER,
	KEY_TYPE_POWER_OF_TEN
}	t_key_type;

typedef struct s_key
{
	t_key_type	type;
	int			value;
}	t_key;

typedef struct s_list
{
	struct s_list	*next;
	t_key			key;
	char			*value;
}	t_list;

int		correct_nbr_len_input(char *av);

int		read_dictionary_file(int fd, t_list **list);
int		read_dictionary_line(char *line, t_list **list);
t_bool	append_node(t_list **head, t_key key, char *value);
void	free_list(t_list *head);
t_error	read_line(int fd, char *line, t_list **list, int *bytes_read);

#endif
