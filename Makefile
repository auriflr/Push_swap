# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Werror -I$(INCDIR) -MMD -MP

# Directories
SRCDIRS := srcs parsing operations
INCDIR := include
OBJDIR := objs
LIBFT_DIR := libft
PRINTF_DIR := printf

# Target
NAME := push_swap

LIBFT := $(LIBFT_DIR)/libft.a
PRINTF := $(PRINTF_DIR)/libftprintf.a

# Find all .c files
SRCS := $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.c))
# Convert to object files in OBJDIR, preserving subdir structure
OBJS := $(patsubst %.c, $(OBJDIR)/%.o, $(SRCS))
DEPS := $(OBJS:.o=.d)

# Default target
all: $(LIBFT) $(PRINTF) $(NAME)

# Link final binary
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBFT) $(PRINTF)
	@printf "\n\033[1A\033[K"
	@printf "\033[0;32m$(NAME) compiled OK!\n"
	@printf "\033[0;37m"

# Compile object files
$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

# Build libft
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# Build printf
$(PRINTF):
	@$(MAKE) -C $(PRINTF_DIR)

# Clean
clean:
	$(RM) -r $(OBJDIR)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

# Include auto-generated dependencies
-include $(DEPS)
