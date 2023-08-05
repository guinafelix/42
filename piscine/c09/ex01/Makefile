NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror -I includes -c
SRC_DIR := ./srcs/
SRC_FILES = ft_putchar ft_swap.c \
		ft_putstr.c ft_strlen.c \
		ft_strcmp.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
LIBC := ar rc
LIBR := ranlib 
RM := rm -f

all: obj $(NAME)

obj: $(SRCS)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

clean: 
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
