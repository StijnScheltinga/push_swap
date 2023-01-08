SOURCES	=		helper_functions.c index.c make_lst_a.c swap_actions.c
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
	gcc $(flags) push_swap.c push_swap_lib.a -o push_swap && ./push_swap 930 7 32