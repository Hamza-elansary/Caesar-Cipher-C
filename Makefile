NAME = CaesarN
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRC = CaesarN.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = CaesarN
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRC = CaesarN.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

