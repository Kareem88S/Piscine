

#include "board.h"

// echo &?
// cc -Wall -Wextra -Werror *.c && ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
// cc *.c && ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

int	main(int argc, char *argv[])
{
	t_board data;

	if (check_argc(argc) != 0)
		return (1);
	if (check_argv(argv[1]) != 0)
		return (2);
	if (create_struct(&data, argv[1]) != 0)
		return (3);
	init_struct(&data, argv[1]);
	printf("hee\n");
	if (rush(argv[1], &data) != 0)
		return (4);


	// free_struct functions to end the program
	return (0);
}
