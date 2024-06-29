#include "board.h"

int calc_max_nbr(char input_str[])
{
	int side_length;

	side_length = 0;
	while (input_str[side_length] != '\0')
	{
		side_length++;
	}
	return ((side_length + 1) / 8);
}
