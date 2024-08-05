
#include "board.h"


void	print_board(t_board *data)
{
	while (data->col < data->max_size)
	{
		data->row = 0;
		while (data->row < data->max_size)
		{
			put_char(data->board[data->col][data->row]);
			if (data->row < data->max_size)
				put_char(' ');
			data->row++;
		}	
		put_char('\n');
		data->col++;
	}
}

void	init_struct(t_board *data, char *str)
{
	data->row = 0;
	data->col = 0;
	while (data->row < data->max_size)
	{	
		data->top[data->row] = *(str + (data->row * 2));
		data->bottom[data->row] = *(str + (data->max_size * 2) + (data->row * 2));
		data->left[data->row] = *(str + (data->max_size * 4) + (data->row * 2));
		data->right[data->row] = *(str + (data->max_size * 6) + (data->row * 2));
		//printf("%c\n", data->right[0]);
		data->row++;
	}
	while (data->col < data->max_size)
	{
		data->row = 0;
		while (data->row < data->max_size)
		{
			data->board[data->col][data->row] = '0';
			data->row++;
		}
		data->col++;
	}
	data->row = 0;
	data->col = 0;
}

int	create_struct(t_board *data, char *str)
{
	int i;

	data->max_size = calc_max_nbr(str);
	data->top = malloc(data->max_size);
	data->left = malloc(data->max_size);
	data->right = malloc(data->max_size);
	data->bottom = malloc(data->max_size);

	data->board = (char **)malloc(data->max_size * sizeof(char *));
	i = 0;
	while (i < data->max_size)
	{
		data->board[i] = malloc(sizeof(char) * data->max_size);
		if (data->board[i] == NULL)
			return (memory_error()); 
		i++;
	}
	if (data->top == NULL || data->right == NULL || data->bottom == NULL 
		|| data->board == NULL || data->left == NULL)
		return (memory_error());
	return (0);
}



























	





//    for (i = 0; i < size; i++) 
//	{
//        board->contents_board[i] = malloc(size * sizeof(char));
//        if (board->contents_board[i] == NULL) {
//            // Properly handle memory allocation failure
//            // Free previously allocated memory
//            while (i-- > 0) {
//                free(board->contents_board[i]);
//            }
//            free(board->contents_board);
//            exit(1);
//        }
//    }
//}



