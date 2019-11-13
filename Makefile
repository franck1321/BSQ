##
## EPITECH PROJECT, 2019
## l
## File description:
## l
##

NAME	= bsq

CC	= gcc

RM	= rm -f

SRCS	= ./lib/my/my_getnbr.c \
	  ./lib/my/my_isneg.c \
	  ./lib/my/my_put_nbr.c \
	  ./lib/my/my_putchar.c \
	  ./lib/my/my_putstr.c \
	  ./lib/my/my_revstr.c \
	  ./lib/my/my_sort_in_array.c \
	  ./lib/my/my_str_isalpha.c \
	  ./lib/my/my_str_islower.c \
	  ./lib/my/my_str_isnum.c \
	  ./lib/my/my_str_isprintable.c \
	  ./lib/my/my_strcapitalize.c \
	  ./lib/my/my_strcat.c \
	  ./lib/my/my_strcmp.c \
	  ./lib/my/my_strcpy.c \
	  ./lib/my/my_strdup.c \
	  ./lib/my/my_strlen.c \
	  ./lib/my/my_strlowcase.c \
	  ./lib/my/my_strncmp.c \
	  ./lib/my/my_strncpy.c \
	  ./lib/my/my_strstr.c \
	  ./lib/my/my_strupcase.c \
	  ./lib/my/my_swap.c \
	  ./lib/my/open_file.c \
      ./lib/my/my_str_to_word_array.c \
	  ./lib/my/print_tab.c \
	  ./src/check_error.c \
	  ./src/main.c \
	  ./src/bsq.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
