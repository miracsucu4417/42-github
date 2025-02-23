NAME = libft.a

SRCS_DIR = srcs
SRCS = $(addprefix $(SRCS_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)

OBJS_DIR = $(SRCS_DIR) # Object dosyaları da srcs dizininde olacak
OBJS = $(SRCS:.c=.o)


INCLUDES_DIR = includes
INCLUDES = -I$(INCLUDES_DIR)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "libft.a oluşturuldu."

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCLUDES_DIR)/ft.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "Object dosyaları silindi."

fclean: clean
	rm -f $(NAME)
	@echo "libft.a silindi."

re: fclean all

.PHONY: all clean fclean re