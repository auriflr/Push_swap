NAME = libftprintf.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

INCDIR = ../lib

SRCS = ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCDIR)ft_printf.h
	@mkdir -p $(dir $@)
	@printf "\033[0;37m 👾Generating $(TITLE) objects... %-33.33s\r👾" $@
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@printf "\033[0;31m$(TITLE) 👾all clean!👾\n"
	@printf "\033[0;37m"

fclean: clean
	$(RM) $(NAME)
	@printf "\033[0;34m$(TITLE) 👾deleted!👾\n"
	@printf "\033[0;37m"

re: fclean all

.PHONY: all clean fclean re