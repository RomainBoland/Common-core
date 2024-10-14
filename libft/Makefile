CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c \
	ft_atoi.c ft_memcpy.c ft_memset.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

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