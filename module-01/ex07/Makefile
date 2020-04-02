NAME = 		replace
SRCS =		replace.cpp \

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

test:		$(NAME)
			./test.sh

.PHONY:		all re clean fclean test