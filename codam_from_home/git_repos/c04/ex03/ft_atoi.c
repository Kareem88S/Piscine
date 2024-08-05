

#include <unistd.h>

int	ft_atoi(char *str);
int	ft_strlen(char *str);
int	ft_check_whitespace(char *str);
int	ft_check_for_correct_input(char c);
int	ft_count_signs(char *str_from_sign);


int	ft_check_whitespace(char *str)
{
	int white;

	white = 0;
	while (*str)
	{
		if (*str == 9 || *str == 10 || *str == 11 || *str == 12 || *str == 13)
			white++;
		else
			return (white);
		str++;
	}
	return (-1); // for norminette
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i++;
	return (i);
}

int	ft_check_for_correct_input(char c)
{
	if (c == '+' || c == '-')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (-1);	
}

int	main(void)
{
	int i = ft_atoi("   +123  hi");
}

int	ft_count_signs(char *str_from_sign)
{
	int	count;

	count = 0;
	while (*str_from_sign)
	{
		if (*str_from_sign == '-' || *str_from_sign == '+')
			count++;
		else
			return (count);
	}
	return (count);
}

int ft_atoi(char *str)
{
	int temp;
	int str_len;
	int end_of_white;
	int	count_minuses;

	str_len = ft_strlen(str);
	end_of_white = ft_check_whitespace(str);
	temp = ft_check_for_correct_input(str[end_of_white]);
	if (temp != 0) // bad input
		return (0);
	else
		count_minuses = ft_count_signs(&str[end_of_white]);
	// start of string with numbers ought to be "(end_of_white + count_minuses)"
	while
	if (*)

}

int ft_atoi(char *str)
{
	int	whitespace;
	
	int	nbr;

	whitespace = 1;
	nbr = 0;
	count_minuses = 0;
	while (*str != '0')
	{
		if (whitespace == 1)
			whitespace = ft_check_whitespace(*str); // sets to 0 (off) if finds anything else
		if (whitespace == 1)
			str++;
		else if (nbr == 0)
		{
			// faulty string to begin with
			if (ft_check_for_correct_input() == -1)
				return (0);					
			else if (*str == '-' || *str == '+')
				if (*str == '-')
					count_minuses++;
			else if (*str >= '0' && *str <= '9') // else suffices
				nbr = ft_start_str(count_minuses, *str); // sets to 1
				// it has to be a number
		}
		else // number has already begun
		{
			if (*str < '0' || *str > '9')
				return (nbr);
				// finish function and return int.
			// recursive?
			// pow ?

		}
	}
}

// int	ft_start_str(int count_minuses, char c)
// {
// 	if (count_minuses % 2 == 1)
// 		write(1, "-", 1);
// 	return (1);
// }




/*
 isspace()
checks for white-space characters.  In the "C" and "POSIX" locales, these are: 
		space, form-feed ('\f'), 	12
		newline ('\n'), 			10
		carriage return ('\r'), 	13
		horizontal tab ('\t'), 		09
		and vertical tab ('\v').	11
*/