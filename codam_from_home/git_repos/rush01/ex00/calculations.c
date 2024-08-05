#include "board.h"

int calc_max_nbr(char input_str[])
{
	int str_len;

	str_len = 0;
	while (input_str[str_len++]);
	return ((str_len + 1) / 8);
}
