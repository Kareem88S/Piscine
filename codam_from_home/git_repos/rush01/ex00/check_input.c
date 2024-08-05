#include "board.h"

int	check_argc(int argc)
{
	if (argc != 2)
		return (input_error(argc));
	return (0);
}

int	check_argv(char *str)
{
	char	max_size;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if ((i + 1) % 8 != 0) // check if the string has 4 equal sides
		return (faulty_str());
	max_size = '0' + ((i + 1) / 8);
	i = 0;
	while (1)
	{
		if (str[i] < '1' || str[i] > max_size)
			return (faulty_str());
		i++;
		if (str[i] == '\0')	// official escape from the function 
			return (0);
		else if (str[i] != ' ') 
			return (faulty_str());
		i++;
	}
}

int	clean_string(t_board data, char *source_str)
{
	char str[16];
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (source_str[i] != '\0')
	{
		if (source_str[i] == ' ')
			i++;
		str[j] = source_str[i];
		i++;
		j++;
	}


	i = 0;
	while (i < data.max_size)
	{
		data.top[i] = *(str + i);
		data.right[i] = *(str + data.max_size + i);
		data.bottom[i] = *(str + data.max_size * 2 + i);
		data.left[i] = *(str + data.max_size * 3 + i);
		i++;
	}
	return (0);
}

