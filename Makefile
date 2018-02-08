##
## EPITECH PROJECT, 2017
## make
## File description:
## make
##

SRC	=	./lib/my/my_putchar.c	\
		./lib/my/my_getnbr.c	\
		./lib/my/my_strlen.c	\
		./lib/my/my_putstr.c	\
		./src/main.c		\
		./src/my_sokoban.c	\
		./src/copy.c		\
		./src/move.c		\
		./src/key_event.c	\
		./src/helper.c		\
		./src/get_info.c



OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -pedantic -lncurses -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) $(CFLAGS)
	$(RM) $(OBJ)
clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f 	$(NAME)

re:	fclean all
