/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:35:54 by dbank             #+#    #+#             */
/*   Updated: 2024/06/26 22:17:33 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	error_file_open(void)
{
	write(2, "ERROR: failed to open file\n", 28);
	return (1);
}

int	error_file_read(void)
{
	write(2, "ERROR: failed to read file\n", 28);
	return (1);
}

int	malloc_error(void)
{
	write(2, "ERROR: malloc failed\n", 22);
	return (-1);
}

int	bsq_finder_error(void)
{
	write(2, "ERROR: no square found\n", 24);
	return (-1);
}

int	map_error(void)
{
	write(2, "map error\n", 11);
	return (-1);
}
