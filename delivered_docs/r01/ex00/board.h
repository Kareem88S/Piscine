#ifndef BOARD_H
# define BOARD_H // block, so space after #

# include <stddef.h>  // for size_t
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_board t_board;

void	initialize_board(t_board *board, int rows, int cols);
void	free_board(t_board *board);
int 	memory_error(void);
int 	calc_max_nbr(char input_str[]);
int 	create_board(t_board *board);
int		input_error(int argc);
int	faulty_str(void);
int	check_argc(int argc);
int	check_argv(char *str);
int create_space(t_board *board);															
int	rush(char *user_input, t_board *data);
int	create_struct(t_board *data, char *str);
void	init_struct(t_board *data, char *str);
void	print_board(t_board *data);
void	put_char(char c);
void	solver(t_board cpy_data, char cur_col, char cur_row, char cur_num);
int	check_possible(t_board cpy_data, char cur_col, char cur_row, char cur_num);

int check_dup_row(t_board cpy_data, char cur_col, char cur_row, char cur_num);
int check_dup_col(t_board cpy_data, char cur_col, char cur_row, char cur_num);
int check_top(t_board cpy_data, char cur_col, char cur_row, char cur_num);
int check_bottom(t_board cpy_data, char cur_col, char cur_row, char cur_num);
int check_left(t_board cpy_data, char cur_col, char cur_row, char cur_num);
int check_right(t_board cpy_data, char cur_col, char cur_row, char cur_num);

typedef struct s_board
{
	int 	row;
	int		col;
	int 	max_size;
	char	*top;
	char	*right;
	char	*bottom;
	char	*left;
	char 	**board;
} t_board;

#endif // BOARD_H


//0 0 0 0
//0 0 0 0
//0 0 0 0
//0 0 0 0