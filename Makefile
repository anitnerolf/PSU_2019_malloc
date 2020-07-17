##
## EPITECH PROJECT, 2020
## malloc
## File description:
## Makefile
##

NAME	=	libmy_malloc.so

SRC	=	malloc.c	\
		free.c		\
		realloc.c	\
		calloc.c	\
		realloc_array.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-fPIC -shared

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -I ./include

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all
