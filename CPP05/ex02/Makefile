# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 23:48:11 by oumondad          #+#    #+#              #
#    Updated: 2025/08/23 00:43:42 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= RoboForm

SRC			= main.cpp Bureaucrat.cpp PresidentialPardonForm.cpp AForm.cpp \
				RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
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