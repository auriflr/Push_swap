NAME = push_swap

PRINTF_DIR = PRINTF_DIR
LIBFT_DIR = Libft
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
PRINTF = $(PRINTF_DIR)/printf.a
LIBFT = $(LIBFT_DIR)/libft.a

SRCS =

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF) $(LIBFT)
		$(CC) $(CFLAGS) -o $@ $^
		@printf "\n\033[1A\033[K"
		@printf "\033[0;32m$(NAME) compiled OK!\n"
		@printf "\033[0;37m"

$(PRINTF):
			make -C $(PRINTF_DIR)

$(LIBFT):
			make -C $(LIBFT_DIR)

%.o: %.c include/printf.h include/push_swap.h include/libft.h
		$(CC) $(CFLAGS) -I include -c $< -o $@
	
clean:
		$(RM) $(OBJS)
		make -C $(PRINTF_DIR) $(LIBFT_DIR) clean

fclean: clean
		$(RM) $(NAME)
		make -C $(PRINTF_DIR) $(LIBFT_DIR) clean

re: fclean all

.PHONY: all clean fclean re