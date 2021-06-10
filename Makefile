##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c				\
		src/lib/get_next_line.c			\
		src/lib/my_putstr.c			\
		src/lib/my_putchar.c			\
		src/lib/my_strcmp.c			\
		src/lib/my_strlen.c			\
		src/lib/str_to_int.c			\
		src/gestion_arg/help.c			\
		src/gestion_arg/create_tab.c		\
		src/gestion_arg/arg.c			\
		src/gestion_arg/check_setup.c		\
		src/game/game.c				\
		src/setup/setup.c			\
		src/debug/check_tetrimino.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

CPPFLAGS=	-I include

CFLAGS	=	-g3

LDFLAGS	=	-lncurses

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(SRC) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	find -name "*~" -delete
	find -name "#*#" -delete
	find -name "vgcore*" -delete
	find -name "~.o" -delete
	find -name "*.a" -delete

fclean: clean
	$(RM) $(NAME)

re: fclean all
