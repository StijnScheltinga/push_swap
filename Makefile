SOURCES	=		helper_functions.c index.c rotate.c push.c swap.c small_sort.c error_handling.c push_swap.c ft_atoi.c
BUILD	=		build
OBJECTS	=		$(addprefix $(BUILD)/, $(SOURCES:.c=.o))
NAME	=		push_swap
FLAGS	=		-Wall -Werror -Wextra
CC		=		gcc

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(flags) -o $(NAME) $(OBJECTS)

$(BUILD)/%.o: %.c | $(BUILD)
	gcc $(FLAGS) -c $< -o $@

$(BUILD):
	@mkdir -p $(BUILD)

clean:
	rm -rf $(OBJECTS)
	rm -rf $(BUILD)

fclean:
	rm -rf $(OBJECTS) $(NAME)
	rm -rf $(BUILD)

re: fclean all
