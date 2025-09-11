NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC_DIRS := ft_fd ft_is ft_lst ft_mem ft_pri ft_str
SRCS := $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))

OBJS := $(SRCS:.c=.o)
	
.c.o:
	${CC} ${CFLAGS} -c $< -o $@   
	@mkdir -p $(dir $@)
	@printf "\033[0;37m 👾Generating $(TITLE) objects... %-33.33s\r👾" $@              
	
$(NAME): ${OBJS}
	${AR} ${NAME} ${OBJS}

all: $(NAME)

clean:
	${RM} ${OBJS} ${OBJS_B}
	@printf "\033[0;31m$(TITLE) 👾all clean!👾\n"
	@printf "\033[0;37m"

fclean: clean
	${RM} ${NAME}
	@printf "\033[0;34m$(TITLE) 👾deleted!👾\n"
	@printf "\033[0;37m"

re: fclean all
	@printf "\033[0;32m$(NAME) 👾compiled OK!👾\n\033[0;37m"

bonus: $(NAME) ${OBJS_B}
	${AR} ${NAME} ${OBJS} ${OBJS_B}

.PHONY: all bonus clean fclean re
