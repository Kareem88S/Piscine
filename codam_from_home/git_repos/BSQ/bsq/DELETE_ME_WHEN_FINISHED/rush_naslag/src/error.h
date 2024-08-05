/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:46:26 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 23:24:45 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "bool.h"

# define ERROR_NONE 0
# define ERROR_INVALID_DICT -1
# define ERROR_INVALID_NUMBER -2
# define ERROR_INVALID_ARGS -3

typedef int	t_error;

t_error	show_error(t_error error);
t_bool	is_error(t_error error);

#endif
