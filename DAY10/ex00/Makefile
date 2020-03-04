# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 14:17:14 by jjerde            #+#    #+#              #
#    Updated: 2018/10/02 16:51:39 by jjerde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ./src/
HEADER = ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I$(HEADER) $(SOURCE)ft_putchar.c \
	$(SOURCE)ft_putstr.c $(SOURCE)ft_strcmp.c $(SOURCE)ft_strlen.c \
	$(SOURCE)ft_swap.c
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)
clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
