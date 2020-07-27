# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/21 14:20:54 by mle-moni          #+#    #+#              #
#    Updated: 2020/03/06 15:36:36 by mle-moni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		convert
SRCS =		main.cpp \
			deal_with_num.cpp \
			print_things.cpp \

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
		./$(NAME) "0"
		./$(NAME) "nan"
		./$(NAME) "42.0f"
		./$(NAME) "	"
# non displayable char (horizontal tab)
		./$(NAME) "+inf"
		./$(NAME) "-inf"
		./$(NAME) "+inff"
		./$(NAME) "-inff"
		./$(NAME) "nanf"
		./$(NAME) "c"
		./$(NAME) "a"
		./$(NAME) "+"
		./$(NAME) "."
		./$(NAME) "-42"
		./$(NAME) "42"
		./$(NAME) "0.0f"
		./$(NAME) "-4.2f"
		./$(NAME) "4.2f"
		./$(NAME) "0.0"
		./$(NAME) "-4.2"
		./$(NAME) "4.2"

.PHONY:		all re clean fclean test
