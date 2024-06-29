#include "board.h"

#include <unistd.h>
#include <stdlib.h>

int	input_error(int argc)
{
	write(1, "Invalid input: ", 15);
	if (argc < 2)
		write(1, "Too few arguments.", 18);
	else
		write(1, "Too many arguments.", 19);
 	write(1, "To start program, write: ", 25);
	write(1, "'./rush-01 \"list of ints\".'\n Please retry\n", 43);
	return (-1);
}

int memory_error(void)
{
	write(1, "Memory allocation failed\n", 25);
	return (-2);
}

int	faulty_str(void)
{
	write(1, "false input", 11);
	return (-3);
}