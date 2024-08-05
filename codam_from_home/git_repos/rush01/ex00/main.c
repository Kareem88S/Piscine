

#include "board.h"

// echo &?
// cc -Wall -Wextra -Werror *.c && ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

int	main(int argc, char *argv[])
{
	t_board data;

	if (check_argc(argc) != 0)
		return (-1);
	if (check_argv(argv[1]) != 0)
		return (-2);
	if (create_struct(data, argv[1]) != 0)
		return (-3);
	init_struct(data, argv[1]);
	if (rush(argv[1], data) != 0)
		return (-4);

	print_board(data); // deze call in different location
	// free_struct functions to end the program
	return (0);
}

void	print_board(t_board data)
{
	while (data.col < data.max_size)
	{
		data.row = 0;
		while (data.row < data.max_size)
		{
			put_char(data.board[data.col][data.row]);
			if (data.row < data.max_size)
				put_char(' ');
			data.row++;
		}	
		put_char('\n');
		data.col++;
	}
}

void	init_struct(t_board data, char *str)
{
	data.row = 0;
	data.col = 0;
	while (data.row < data.max_size)
	{	
		data.top[data.row] = *(str + (data.row * 2));
		data.bottom[data.row] = *(str + (data.max_size * 2) + (data.row * 2));
		data.left[data.row] = *(str + (data.max_size * 4) + (data.row * 2));
		data.right[data.row] = *(str + (data.max_size * 6) + (data.row * 2));
		data.row++;
	}
	while (data.col < data.max_size)
	{
		data.row = 0;
		while (data.row < data.max_size)
		{
			data.board[data.col][data.row] = '0';
			data.row++;
		}
		data.col++;
	}
	data.row = 0;
	data.col = 0;
}

int	create_struct(t_board data, char *str)
{
	int i;

	data.max_size = calc_max_nbr(str);
	printf("TEST1\n");
	data.top = malloc(data.max_size);
	printf("TEST2\n");
	data.left = malloc(data.max_size);
	printf("TEST3\n");
	data.right = malloc(data.max_size);
	printf("TEST4\n");
	data.bottom = malloc(data.max_size);
	printf("TEST5\n");
	data.board = (char **)malloc(data.max_size * sizeof(char *));
	i = 0;
	while (i < data.max_size)
	{
		data.board[i] = malloc(sizeof(char) * data.max_size);
		if (data.board[i] == NULL)
			return (printf("TEST6\n"), memory_error()); 
		i++;
	}
	// if (data.top == NULL || data.right == NULL || data.bottom == NULL 
	// 	||data.board[data.max_size] == NULL || data.left == NULL)
	if (data.top == NULL || data.right == NULL || data.bottom == NULL 
		|| data.board == NULL || data.left == NULL)
		return (printf("TEST7\n"), memory_error());
	return (0);
}

// int create_space(t_board *board)
// {

// }


// int	malloc_struct(t_board *board)
// {


//     board->draw_board = malloc(sizeof(char *));
//     if (board->draw_board == NULL) 
// 		return (memory_error());
// }

