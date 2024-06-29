/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:28:53 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/26 15:28:53 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

/*
Macro to compute the absolute value of the input, 
	in other words positive number.
Best not to use with increments like i++, 
	because it will always result in a positive number.
*/
# define ABS(x) (( \
	(x) ^ ((x) >> (sizeof(int) * 8 - 1))) \
	 - ((x) >> (sizeof(int) * 8 - 1)))

#endif
//# define ABS(value) ((value) < 0 ? -(value) : (value))

//# define ABS(value) ((value) < 0 ? -(value) : (value)) 	<- illegal

/*
negative = inversion + 1
1
binary: 	00000000 00000000 00000000 00000001 
inversion:	11111111 11111111 11111111 11111110
negative:	11111111 11111111 11111111 11111111 

8
binary: 	00000000 00000000 00000000 00001000 
inversion:	11111111 11111111 11111111 11110111
negative:	11111111 11111111 11111111 11111000 

9
binary: 	00000000 00000000 00000000 00001001 
inversion:	11111111 11111111 11111111 11110110
negative:	11111111 11111111 11111111 11110111 

20
binary: 	00000000 00000000 00000000 00010100 
inversion:	11111111 11111111 11111111 11101011
negative:	11111111 11111111 11111111 11101100 

12
binary: 	00000000 00000000 00000000 00001100 
inversion:	11111111 11111111 11111111 11110011
negative:	11111111 11111111 11111111 11110100 




00000000 

1 = 1
2 = 10
3 = 11
4 = 100
7 = 111
8 = 1000
15 = 1111
16 = 10000
31 = 11111
32 = 100000
63 = 111111
64 = 1000000
127 = 1111111

*/