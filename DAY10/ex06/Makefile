# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 14:17:14 by jjerde            #+#    #+#              #
#    Updated: 2018/10/02 18:25:44 by jjerde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
OBJ = ft_putstr.o ft_putnbr.o main.o ft_putchar.o
SOURCE = ft_putstr.c ft_putnbr.c main.c ft_putchar.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I. $(SOURCE)
	gcc -o $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
