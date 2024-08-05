/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:46:19 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 22:29:57 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_FUNCTIONS_H
# define DICT_FUNCTIONS_H

# include "list.h"

t_bool	is_key_equal(t_key a, t_key b);
char	*get_number_word(t_list *list, t_key key);
t_error	read_dictionary_line(char *line, t_list **list);
t_error	read_dictionary_file(int fd, t_list **list);

#endif
