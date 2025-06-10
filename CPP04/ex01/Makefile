# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 11:29:03 by oumondad          #+#    #+#              #
#    Updated: 2025/06/10 16:32:52 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Polymorphism

SRC			= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ			= ${SRC:.cpp=.o}

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

CXX			= c++

all : ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : clean

.SECONDARY: ${OBJ}