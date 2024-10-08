# Makefile settings
MAKEFLAGS += -s

# Compiler and flags
CC = cc
FLAGS = -Wall -Wextra -Werror

# Project names
NAME = server client
NAME_BONUS = server_bonus client_bonus

# Directories and libraries
LIBFT_DIR = Libft/
LIBFT = $(LIBFT_DIR)libft.a
FT_PRINTF_DIR = ft_printf/
FT_PRINTF = $(FT_PRINTF_DIR)libftprintf.a

# Source files for server and client
SERVER_SRCS = server.c
CLIENT_SRCS = client.c
SERVER_SRCS_BONUS = server_bonus.c
CLIENT_SRCS_BONUS = client_bonus.c

# Object files
SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)
SERVER_OBJS_BONUS = $(SERVER_SRCS_BONUS:.c=.o)
CLIENT_OBJS_BONUS = $(CLIENT_SRCS_BONUS:.c=.o)

# Default target: Compile everything
all: $(NAME)
	@clear
	@echo "	╔══════════════════════════╗"
	@echo "	║ ✅ Compiled Successfully!║"
	@echo "	╚══════════════════════════╝"

# Linking the final executables
$(NAME): $(LIBFT) $(FT_PRINTF) $(SERVER_OBJS) $(CLIENT_OBJS)
	$(CC) $(FLAGS) -o server $(SERVER_OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(FLAGS) -o client $(CLIENT_OBJS) $(LIBFT) $(FT_PRINTF)

# Building the libft library
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Building the ft_printf library
$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)

$(NAME_BONUS): $(LIBFT) $(FT_PRINTF) $(SERVER_OBJS_BONUS) $(CLIENT_OBJS_BONUS)
	$(CC) $(FLAGS) -o server_bonus $(SERVER_OBJS_BONUS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(FLAGS) -o client_bonus $(CLIENT_OBJS_BONUS) $(LIBFT) $(FT_PRINTF)

# Cleaning object files
clean:
	rm -rf $(SERVER_OBJS) $(CLIENT_OBJS) $(SERVER_OBJS_BONUS) $(CLIENT_OBJS_BONUS)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FT_PRINTF_DIR) clean

# Full cleanup, including executables and library
fclean: clean
	rm -rf server client server_bonus client_bonus
	rm -rf $(LIBFT) $(FT_PRINTF)
	@clear
	@echo "	╔══════════════════════════╗"
	@echo "	║ ✅ Compiled Successfully!║"
	@echo "	╚══════════════════════════╝"

# Rebuild everything from scratch
re: fclean all

# Leak testing using Valgrind
leak: re
	valgrind --leak-check=full --show-leak-kinds=all ./server

# Phony targets to avoid filename conflicts
.PHONY: all clean fclean re bonus leak
