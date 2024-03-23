# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ancorder <ancorder@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 18:19:39 by ancorder          #+#    #+#              #
#    Updated: 2024/01/31 12:13:43 by ancorder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex00

SRCS	= Duck.cpp main.cpp newDuck.cpp randomDuck.cpp
OBJS	= $(SRCS:.cpp=.o)
CC		= c++

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS) 
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all