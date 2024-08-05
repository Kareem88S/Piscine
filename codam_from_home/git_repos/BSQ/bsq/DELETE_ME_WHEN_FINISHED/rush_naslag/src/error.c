/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:46:24 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 20:48:20 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include "ft_fputstr.h"
#include "bool.h"
#include "list.h"

t_bool	is_error(t_error error)
{
	return (error < ERROR_NONE);
}

t_error	show_error(t_error error)
{
	if (error == ERROR_INVALID_DICT)
	{
		ft_fputstr(2, "Dict Error\n");
	}
	else if (error == ERROR_INVALID_NUMBER
		|| error == ERROR_INVALID_ARGS)
	{
		ft_fputstr(2, "Error\n");
	}
	return (error);
}
