# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmenke <cmenke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 18:54:58 by cmenke            #+#    #+#              #
#    Updated: 2023/10/24 20:29:18 by cmenke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

OBJDIR := objects

SRCS := main.cpp \
		ClapTrap.cpp

OBJS := $(patsubst %.cpp, ${OBJDIR}/%.o, ${SRCS})

HEADER := $(addprefix includes/, ClapTrap.hpp)

INCLUDES := -I includes

#Production flags
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -pedantic

#Development flags
# CXXFLAGS := -Wall -Wextra -std=c++98 -pedantic -g -O0
# CXXFLAGS += -g -O0
# CXXFLAGS += -fsanitize=thread
# CXXFLAGS += -fsanitize=address

#Add includes
CXXFLAGS += ${INCLUDES}

CXX := c++

RM := rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

${OBJDIR}/%.o: %.cpp ${HEADER} | ${OBJDIR}
	${CXX} ${CXXFLAGS} -c $< -o $@

${OBJDIR}:
	mkdir -p ${OBJDIR}

clean:
	${RM} -r ${OBJDIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

.NOTPARALLEL: