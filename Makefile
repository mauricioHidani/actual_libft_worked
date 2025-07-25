NAME	= libft.a

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -I ./ -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
