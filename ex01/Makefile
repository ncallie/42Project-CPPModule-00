# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncallie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 15:20:31 by ncallie           #+#    #+#              #
#    Updated: 2022/03/23 15:40:28 by ncallie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     =	phonebook
SRC      =	./src/PhoneBook.cpp ./src/Contact.cpp ./src/main.cpp
OBJ      =	$(SRC:.cpp=.o)
HDR      =	./inc/PhoneBook.h ./inc/Contact.h
CC       =	c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re 
all:		$(NAME)

$(NAME):	$(OBJ) 
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp	$(HDR)
			$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all