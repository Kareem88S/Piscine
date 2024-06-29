

#include "board.h"

int check_right(t_board cpy_data, char cur_col, char cur_row, char cur_num)
{
	int i;

	i = 0;
	if (cpy_data.right[cur_row] == '1')
	{
		if (cpy_data.board[cur_row][cur_col] != '0' + cpy_data.max_size)
			return (-1);
	}
	else if (cpy_data.right[cur_row] == '0' + cpy_data.max_size)
	{
		if (cpy_data.board[cur_row][cur_col] != '1')
			return (-1);
	}
	// could be more sophisticated
	return (0);
}

int check_left(t_board cpy_data, char cur_col, char cur_row, char cur_num)
{
	int i;

	i = 0;
	if (cpy_data.left[cur_row] == '1')
	{
		if (cpy_data.board[cur_row][cur_col] != '0' + cpy_data.max_size)
			return (-1);
	}
	else if (cpy_data.left[cur_row] == '0' + cpy_data.max_size)
	{
		if (cpy_data.board[cur_row][cur_col] != '1')
			return (-1);
	}
	// could be more sophisticated
	return (0);
}

int check_bottom(t_board cpy_data, char cur_col, char cur_row, char cur_num)
{
	int i;

	i = 0;
	if (cpy_data.bottom[cur_col] == '1')
	{
		if (cpy_data.board[cur_row][cur_col] != '0' + cpy_data.max_size)
			return (-1);
	}
	else if (cpy_data.bottom[cur_col] == '0' + cpy_data.max_size)
	{
		if (cpy_data.board[cur_row][cur_col] != '1')
			return (-1);
	}
	// could be more sophisticated
	return (0);
}

int check_top(t_board cpy_data, char cur_col, char cur_row, char cur_num)
{
	int i;

	i = 0;
	if (cpy_data.top[cur_col] == '1')
	{
		if (cpy_data.board[cur_row][cur_col] != '0' + cpy_data.max_size -1)
			return (-1);
	}
	else if (cpy_data.top[cur_col] == '0' + cpy_data.max_size -1 )
	{
		if (cpy_data.board[cur_row][cur_col] != '1')
			return (-1);
	}
	// could be more sophisticated

	return (0);
}