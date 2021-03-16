##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile of lib
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir -p ../../include
	cp my.h ../../include
	cp $(NAME) ../../lib

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
