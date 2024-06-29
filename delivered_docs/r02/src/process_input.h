/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 23:02:49 by mpeters           #+#    #+#             */
/*   Updated: 2024/06/23 23:02:50 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESS_INPUT_H
# define PROCESS_INPUT_H

# include "list.h"

int		ft_strlen(char *str);
void	ft_create_key(t_list *list, int id, t_key_type t);
void	ft_print_chunk(t_list *list, char *str, int chunk_size);
void	ft_process_nbr(t_list *list, char *nbr_str);
/*
void	process_nbr(t_list	*list, int nbr_len, char *nbr_str, int cur_pos);
void	pass_chunk(t_list	*list, char *nbr, int size_mod, int nbr_len);
*/

#endif
