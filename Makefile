CC := gcc
CFLAGS := -Wall -Wextra -Werror 

SRCDIRS := srcs parsing operations
INCDIR := include
OBJDIR := objs
LIBFT_DIR := libft
PRINTF_DIR := libft/ft_pri

NAME := push_swap

LIBFT := $(LIBFT_DIR)/libft.a
PRINTF := $(PRINTF_DIR)/libftprintf.a

SRCS := $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.c))
OBJS := $(patsubst %.c, $(OBJDIR)/%.o, $(SRCS))
DEPS := $(OBJS:.o=.d)

all: $(LIBFT) $(PRINTF) $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBFT) $(PRINTF)
	@printf "\n\033[0;37m"

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@printf "\033[0;37m 👾Generating $(TITLE) objects... %-33.33s\r" $@
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@printf "\033[0;37m 👾 $(TITLE) in progress... %-33.33s\r" $@
	@$(MAKE) -C $(LIBFT_DIR) -s --no-print-directory

$(PRINTF):
	@printf "\033[0;37m 👾$(TITLE) in progress... %-33.33s\r" $@
	@$(MAKE) -C $(PRINTF_DIR) -s --no-print-directory

clean:
	$(RM) -r $(OBJDIR)
	$(MAKE) -C $(LIBFT_DIR) clean 
	$(MAKE) -C $(PRINTF_DIR) clean 
	@printf "\033[0;31m$(TITLE) 👾cleaned!👾\n"
	@printf "\033[0;37m"

fclean: clean
	$(RM) $(NAME) 
	$(MAKE) -C $(LIBFT_DIR) fclean 
	$(MAKE) -C $(PRINTF_DIR) fclean
	@printf "\033[0;34m$(TITLE) 👾removed!👾\n"
	@printf "\033[0;37m"

re: fclean all
	@printf "\033[0;32m$(NAME) 👾compiled OK!👾\n\033[0;37m"

.PHONY: all clean fclean re