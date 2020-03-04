# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 14:17:14 by jjerde            #+#    #+#              #
#    Updated: 2018/10/04 21:56:31 by jjerde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
OBJ = *.o
SOURCE = *.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I. $(SOURCE)
	gcc -o $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
