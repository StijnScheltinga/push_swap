SOURCES	=		helper_functions.c index.c rotate.c push.c swap.c small_sort.c error_handling.c
OBJECTS	=		$(SOURCES:.c=.o)
NAME	=		push_swap_lib.a
FLAGS	=		-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	$(MAKE) -C printf
	cp printf/libftprintf.a $(NAME)
	ar rcs $(NAME) $(OBJECTS)

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
	gcc $(flags) push_swap.c push_swap_lib.a -o push_swap && ./push_swap 19 149 10 50 2147483647

checker:
	gcc $(flags) push_swap.c push_swap_lib.a -o push_swap && ./push_swap 1 90 149 4 2147483648 | ./checker_mac 1 90 149 4 2147483648