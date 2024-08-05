SOURCES		=					programma/bsq_finder.c \
								programma/bsq_printer.c \
								programma/file_functions.c \
								programma/helper_functions.c \
								programma/is_valid_input.c \
								programma/main.c \
								programma/print_map.c
OBJECTS=$(patsubst programma/%.c, objects/%.o, $(SOURCES))
NAME		=					bsq

all: $(NAME)

$(NAME): 		objects $(OBJECTS)
	cc -Wall -Wextra -Werror -o $(NAME) $(OBJECTS)

objects:
	mkdir -p objects

objects/%.o: 					programma/%.c
	cc -Wall -Wextra -Werror -c -o $@ $^

debug: $(OBJECTS)
	cc -ggdb -Wall -Wextra -Werror -o $(NAME) $(OBJECTS)

clean:
	rm -rf objects

fclean: 						clean
	rm -rf $(NAME)
