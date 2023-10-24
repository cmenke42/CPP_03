# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 18:54:58 by cmenke            #+#    #+#              #
#    Updated: 2023/10/24 19:27:50 by cmenke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

OBJDIR := objects

SRCS := main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJS := $(patsubst %.cpp, ${OBJDIR}/%.o, ${SRCS})

HEADER := ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

#Production flags
# CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -pedantic

#Development flags
CXXFLAGS := -Wall -Wextra -std=c++98 -pedantic -g -O0
# CXXFLAGS += -g -O0
# CXXFLAGS += -fsanitize=thread
# CXXFLAGS += -fsanitize=address

CXXFLAGS := c++

RM := rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CXXFLAGS} ${CXXFLAGS} ${OBJS} -o ${NAME}

${OBJDIR}/%.o: %.cpp ${HEADER} | ${OBJDIR}
	${CXXFLAGS} ${CXXFLAGS} -c $< -o $@

${OBJDIR}:
	mkdir -p ${OBJDIR}

clean:
	${RM} -r ${OBJDIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

.NOTPARALLEL: