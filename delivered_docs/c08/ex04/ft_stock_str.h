

#ifndef FT_STOCK
# define FT_STOCK

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);

struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
};

#endif