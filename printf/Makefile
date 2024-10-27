# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboland <rboland@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 12:01:29 by rboland           #+#    #+#              #
#    Updated: 2024/10/26 12:01:29 by rboland          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
C = gcc
CFLAGS = -Wall -Wextra -Werror
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
