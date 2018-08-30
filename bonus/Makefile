##
## Makefile for Makefile in /home/Neferett/Makefile
##
## Made by Bonaldi Jordan
## Login   <Neferett@epitech.net>
##
## Started on  Fri Oct 14 12:57:09 2016 Bonaldi Jordan
## Last update Sun Dec 11 14:37:41 2016 Bonaldi Jordan
##

SRC	=	main.c				\
		drawer/my_put_pixel.c		\
		drawer/my_draw_line.c		\
		drawer/my_parallel_projection.c	\
		drawer/base.c			\
		drawer/3d.c			\
		utils/utils.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

LIB	=	lib/get_color.c			\
		lib/nb_of.c			\
		lib/my_str_to_wordtab.c		\
		lib/my_getnbr.c			\
		lib/my_getnbr_base.c		\
		lib/match.c			\
		lib/my_advanced_sort_wordtab.c	\
		lib/my_capitalize.c		\
		lib/my_fact_rec.c		\
		lib/my_find_prime_sup.c		\
		lib/my_isneg.c			\
		lib/my_is_prime.c		\
		lib/my_power_rec.c		\
		lib/my_putchar.c		\
		lib/my_putnbr_base.c		\
		lib/my_put_nbr.c		\
		lib/my_putstr.c			\
		lib/my_revstr.c			\
		lib/my_showstr.c		\
		lib/my_show_wordtab.c		\
		lib/my_sort_int_tab.c		\
		lib/my_sort_wordtab.c		\
		lib/my_square_root.c		\
		lib/my_strcat.c			\
		lib/my_strcmp.c			\
		lib/my_strcpy.c			\
		lib/my_strdup.c			\
		lib/my_str_isalpha.c		\
		lib/my_str_islower.c		\
		lib/my_str_isnum.c		\
		lib/my_str_isprintable.c	\
		lib/my_str_isupper.c		\
		lib/my_strlen.c			\
		lib/my_strlowcase.c		\
		lib/my_strncat.c		\
		lib/my_strncmp.c		\
		lib/my_strncpy.c		\
		lib/my_strstr.c			\
		lib/my_strupcase.c		\
		lib/my_swap.c			\
		lib/nmatch.c

OBJSLIB =       $(LIB:.c=.o)

CFLAGS  += -Wextra -Wall -Werror

CFLAGS  += -Iinclude/ -g3

RM	=	rm -f

NAME	=	wireframe

all:	$(NAME)

$(NAME):	$(OBJSLIB)	$(OBJ)
	ar rc lib/libmy.a $(OBJSLIB)
	$(CC) $(OBJ) -o $(NAME) -Llib/ -lmy -lc_graph_prog -lm

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur

.PHONY: all clean fclean re
