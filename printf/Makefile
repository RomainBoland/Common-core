C = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
SRC = 
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
INCLUDES = -I. -I$(LIBFT_DIR)
all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
