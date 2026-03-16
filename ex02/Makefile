# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/12 14:07:52 by oamairi           #+#    #+#              #
#    Updated: 2026/03/16 16:06:52 by oamairi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex02

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	AAnimal.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

OBJS	=	$(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
