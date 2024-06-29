#include "board.h"



int	rush(char *user_input, t_board *data)
{
	printf("HOI\n");
	solver(*data, '0', '0', '0');
	char *temp = user_input;
	data->max_size =  5;

	temp++;

	return (0);
}
