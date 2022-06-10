# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 18:39:42 by bkeskint          #+#    #+#              #
#    Updated: 2022/06/09 20:09:31 by bkeskint         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = contact.cpp phonebook.cpp main.cpp

CC = clang++

FLAGS	=	-Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) $(NAME)

clean:
		@rm -f ./*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re