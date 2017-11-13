NAME = libft.a
CC = gcc
O_DIR = *.o
CFLAGS = -c -Wall -Werror -Wextra
FILES = *.c
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES)
	ar rc libft.a $(O_DIR)

clean:
	$(RM) $(O_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
