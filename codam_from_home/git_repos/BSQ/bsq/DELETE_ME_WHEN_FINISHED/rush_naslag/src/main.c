/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwijnsma <mwijnsma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:47:11 by mwijnsma          #+#    #+#             */
/*   Updated: 2024/06/23 23:41:37 by mwijnsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "process_input.h"

int	open_dict_file(int ac, char *av[])
{
	char	*path;

	path = "numbers.dict";
	if (ac == 3)
	{
		path = av[1];
	}
	return (open(path, O_RDONLY));
}

int	my_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}




int	main(int ac, char *av[])
{
	int		str_len;
	t_list	*list;
	int		fd;

	if (ac < 2 || ac > 3)
	{
		show_error(ERROR_INVALID_ARGS);
		return (1);
	}
	fd = open_dict_file(ac, av);
	str_len = correct_nbr_len_input(av[ac - 1]);
	if (is_error(str_len))
		return (1);
	list = NULL;
	if (fd < 0)
	{
		show_error(ERROR_INVALID_DICT);
		return (1);
	}
	if (is_error(read_dictionary_file(fd, &list)))
		return (1);
	ft_process_nbr(list, av[ac - 1]);
	free_list(list);
	write(1, "\n", 1);
	return (0);
}
