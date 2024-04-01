NAME	= rush-02

SRC	= main.c \
		ft_split.c \
		get_result.c \
		get_result2.c \
		pars_dict.c \
		pars_input.c \
		check_arg.c \

OBJ	= *.o

FLAGS	= -Wall -Wextra -Werror

$(NAME) :	
	@cc $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean :
	@/bin/rm -f $(NAME)

re :	fclean

.PHONY:	clean fclean re
