NAME	= do-op

OBJS	= $(SRC:.c=.o)

SRC	= $(addprefix $(SRC_DIR)/, do_op.c functions.c operators.c)

SRC_DIR = srcs

INC_DIR = includes

CC	= gcc

FLAGS 	= -Wall -Wextra -Werror

%.o:%.c
	$(CC) $(FLAGS) $(SRC) -I $(INC_DIR) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	@/bin/rm -f $(NAME)

re:	fclean

.PHONY:	clean fclean re
