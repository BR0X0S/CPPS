# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 11:29:03 by oumondad          #+#    #+#              #
#    Updated: 2025/04/26 21:55:25 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Harl2

SRC			= main.cpp Harl.cpp

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