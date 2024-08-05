
#ifndef FT_BOOLEAN
# define FT_BOOLEAN

# include <unistd.h>

# define TRUE 1
# define FALSE 0

# define SUCCESS 0

# define EVEN(nbr) ((nbr) % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typedef int t_bool;

t_bool	ft_is_even(int nbr);
void	ft_putstr(char *str);

# endif