# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/21 14:20:54 by gel-kasr          #+#    #+#              #
#    Updated: 2020/03/06 15:36:36 by mle-moni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		megaphone
SRCS =		megaphone.cpp

OBJS =		$(SRCS:%.cpp=%.o)

CC =		clang++
CFLAGS =	-Wall -Wextra -Werror
DEBUG =		-Wall -Wextra -Werror -g3 -fsanitize=address

CURRENT_FLAGS = $(CFLAGS)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CURRENT_FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
			$(CC) -c $(CURRENT_FLAGS) $< -o $(<:.cpp=.o)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

test:	$(NAME)
		./$(NAME) "shhhhh... I think the students are asleep..."
		./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
		./$(NAME)

.PHONY:		all re clean fclean test
