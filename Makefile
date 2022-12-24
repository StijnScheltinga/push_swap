SOURCES	=		helper_functions.c index.c
OBJECTS	=		$(SOURCES:.c=.o)
NAME	=		push_swap_lib.a
FLAGS	=		-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	(cd libft && make)
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	(cd libft && make clean)
	rm -rf $(OBJECTS)

fclean:
	rm -f $(OBJECTS) $(NAME)
	(cd libft && make fclean)

re: fclean all

test:
	gcc $(flags) push_swap.c push_swap_lib.a -o push_swap && ./push_swap 50 25 10 100 500