/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 00:51:21 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/11 20:37:00 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}
