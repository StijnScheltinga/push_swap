SOURCES	=		helper_functions.c index.c rotate.c push.c swap.c small_sort.c error_handling.c push_swap.c
OBJECTS	=		$(SOURCES:.c=.o)
NAME	=		push_swap
FLAGS	=		-Wall -Werror -Wextra
PRINTF	=		printf/libftprintf.a
CC		=		gcc -g

all: $(NAME)

$(NAME): $(OBJECTS) $(PRINTF)
	$(CC) $(flags) -o $(NAME) $(OBJECTS) $(PRINTF)

$(PRINTF):
	$(MAKE) -C printf

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	(cd printf && make clean)
	rm -rf $(OBJECTS)

fclean:
	rm -f $(OBJECTS) $(NAME)
	(cd printf && make fclean)

re: fclean all

test:
	./push_swap 100 2147483647 50

checker:
	./push_swap 1 2 3 4 5 | ./checker_mac 2 1