
#include "ft_stock_str.h"
#include <stdlib.h>

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	ft_strs_to_tab(ac, av);
	return (0);
}



struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{

	struct s_stock_str	*adr_first_strct;
	int					total_size_struct_array;
	int					*str_len;
	int					i;
	int					len;

	str_len = (int)malloc(sizeof(int * ac));
	total_size_struct_array = 0;
	i = 0;
	while (av[i])
	{
		len = 0;
		while (av[i][len])
			len++;
		str_len[i] = len;
		total_size_struct_array += ((2 * len) + sizeof(int));

	}
	total_size_struct_array += sizeof(char*);

	adr_first_strct = malloc(total_size_struct_array);

	// ac;
	// str_len = 0;
	// if (ac == 1)
	// 	return (NULL);
	// i = 1;
	// while (i < ac)
	// {
	// 	str_len = ft_strlen(av[i + 1]);
	// 	str_cpy = malloc(sizeof(char) * str_len);
	// 	if (i == 1)
	// 		adr_first_strct = create_struct(av[i + 1], str_cpy, str_len);
	// 	else
	// 		adr_next_strct = create_struct(av[i + 1], str_cpy, str_len);
	// 	i++;
	// }
	return (adr_first_strct);
		
}

