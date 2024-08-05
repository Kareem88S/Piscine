
#include "board.h"

void	solver(t_board cpy_data, char cur_col, char cur_row, char cur_num)
{
	cur_num++;
	//actual finish-line
	if (cpy_data.board[cpy_data.max_size - 1][cpy_data.max_size - 1] != '0')
	{

		if (check_possible(cpy_data, cur_col, cur_row, cur_num) == 1)
		{
			//print_board(&cpy_data);
			return;
		}
		else
		{
			solver(cpy_data, cur_col, cur_row, cur_num);
		}
	}
	else
	{
		if (check_possible(cpy_data, cur_col, cur_row, cur_num) == 1)
		{
			cur_num = '0';
			if (cur_col < cpy_data.max_size - 1)
				solver(cpy_data, cur_col++, cur_row, cur_num);
			else
			{
				cur_col = 0;
				solver(cpy_data, cur_col, cur_row++, cur_num);
			}
				
		}
		else if (cur_num <= '0' + cpy_data.max_size)
		{
			solver(cpy_data, cur_col, cur_row, cur_num);

		}
		else

			return;
	}
	return;
}

int	check_possible(t_board cpy_data, char cur_col, char cur_row, char cur_num)
{

	if (check_dup_row(cpy_data, cur_col, cur_row, cur_num) != 0)
		return (-1);

	if (check_dup_col(cpy_data, cur_col, cur_row, cur_num) != 0)
		return (-1);
	if (check_top(cpy_data, cur_col, cur_row, cur_num) != 0)
		return (-1);
	if (check_bottom(cpy_data, cur_col, cur_row, cur_num) != 0)
		return (-1);
	if (check_left(cpy_data, cur_col, cur_row, cur_num) != 0)
		return (-1);

	if (check_right(cpy_data, cur_col, cur_row, cur_num) != 0)
		return (-1);
	return (1);
}



int check_dup_col(t_board cpy_data, char cur_col, char cur_row, char cur_num)
{
	int i;

	i = 0;
	if (cur_col > 0)
	{
		while (cur_col - i > '0')
		{
			if (cpy_data.board[cur_row][cur_col] == cpy_data.board[cur_row][cur_col - i])
				return (-1);
			i++;
		}
	}
	return (0);
}

int check_dup_row(t_board cpy_data, char cur_col, char cur_row, char cur_num)
{
	int i;
	i = 0;
	if (cur_row > '0')
	{
		while (cur_row - i > 0)
		{
			if (cpy_data.board[cur_row][cur_col] == cpy_data.board[cur_row - i][cur_col])
				return (-1);
			i++;
		}
	}
	return (0);
}