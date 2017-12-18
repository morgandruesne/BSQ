##
## EPITECH PROJECT, 2017
## FirstMakefiles
## File description:
## FirstMakefiles
##

SRC	=	main.c		\
		add_files.c	\
		get_zero.c	\
		put_get.c	\
		check.c		\
		fonction.c	\

NAME	=	bsq

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
