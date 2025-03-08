SRCS = ft_puterr.c ft_display_file.c main.c
OBJS = $(SRCS:.c=.o)

PRG_NAME = ft_cat
GCC_FLAGS = -Wall -Wextra -Werror

all: PRG_NAME

PRG_NAME: $(OBJS) ft.h
	gcc $(GCC_FLAGS) $(OBJS) -o $(PRG_NAME)

%o: %c ft.h
	gcc -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(PRG_NAME)

.PHONY: all clean fclean