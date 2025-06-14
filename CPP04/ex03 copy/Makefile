# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 11:29:03 by oumondad          #+#    #+#              #
#    Updated: 2025/06/14 17:01:00 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Abstract

SRC			= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ			= ${SRC:.cpp=.o}

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 
# CXXFLAGS	+= -fsanitize=address -g3

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