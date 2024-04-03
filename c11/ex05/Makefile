NAME	= do-op

OBJS	= $(SRC:.c=.o)

SRC	= do_op.c functions.c operators.c

INC_DIR = includes

CC	= cc

FLAGS 	= -Wall -Wextra -Werror

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -I $(INC_DIR) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
