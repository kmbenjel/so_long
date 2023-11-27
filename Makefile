# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 02:03:55 by kbenjell          #+#    #+#              #
#    Updated: 2023/11/27 03:54:24 by kbenjell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit
SRC =	main.c \
	checks/*.c \
	parsing/*.c \
	get_next_line/*.c \

LIBFT = libft/libft.a
NAME = so_long
RM = rm -f

all: $(NAME)

$(NAME): $(SRC)
	@	make -C libft/ > /dev/null
	@	$(CC) $(CFLAGS) $(MLX_FLAGS) $(SRC) $(LIBFT) -o $(NAME)
	@	echo "\033[32m make: OK \033[0m"

clean:
	@	make clean -C libft/ 
	@	echo "\033[32m clean: OK \033[0m"

fclean: clean
	@	$(RM) $(NAME)
	@	echo "\033[32m fclean: OK \033[0m"

re: fclean all

.PHONY: clean fclean re all



