NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)


all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) *.o
bonus: $(OBJ) $(BONUS_OBJ)
	@ar rc $(NAME) *.o
clean:
	@/bin/rm -f  *.o
fclean: clean
	@/bin/rm -f $(NAME)
re: fclean all
so:	
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS_OBJ)
.PHONY: all bonus clean fclean re
