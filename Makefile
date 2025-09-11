CC := gcc
CFLAGS := -Wall -Wextra -Werror -I$(INCDIR) -MMD -MP

# Directories
SRCDIRS := srcs parsing operations
INCDIR := include
OBJDIR := objs
LIBFT_DIR := libft
PRINTF_DIR := libft/ft_pri

# Target
NAME := push_swap

LIBFT := $(LIBFT_DIR)/libft.a
PRINTF := $(PRINTF_DIR)/libftprintf.a

SRCS := $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.c))
OBJS := $(patsubst %.c, $(OBJDIR)/%.o, $(SRCS))
DEPS := $(OBJS:.o=.d)

all: $(LIBFT) $(PRINTF) $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBFT) $(PRINTF)
	@printf "\n\033[1A\033[K"
	@printf "\033[0;32m$(NAME) compiled OK!\n"
	@printf "\033[0;37m"

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@printf "\033[0;37m Generating $(TITLE) objects... %-33.33s\r" $@
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	@$(MAKE) -C $(PRINTF_DIR)

# Clean
clean:
	$(RM) -r $(OBJDIR)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	@printf "\033[0;31m$(TITLE) cleaned!\n"
	@printf "\033[0;37m"

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	@printf "\033[0;31m$(TITLE) removed!\n"
	@printf "\033[0;37m"

re: fclean all

.PHONY: all clean fclean re

# -include $(DEPS)