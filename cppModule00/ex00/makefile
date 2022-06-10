NAME	=	megaphone

SRC		=	megaphone.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

$(RM)	=	rm -f

all:		$(NAME)
$(NAME):	$(SRC)
			clang++ $(FLAGS) -o $(NAME) $(SRC)

clean:
			$(RM) $(NAME)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

test:			$(NAME)
				./megaphone "test is running..."
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

.PHONY:			all clean fclean re test