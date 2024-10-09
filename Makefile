CC = cc -g
NAMEC = client
NAMES = server
LIBFT = Libft/libft.a
PRINTF = ft_printf/libftprintf.a
FLAGS = -Wall -Werror -Wextra
SRCS = client.c 
SRSS = server.c

all: ${NAMEC} ${NAMES}

${LIBFT}:
	@make -C Libft
${PRINTF}:
	@make -C ft_printf
${NAMEC}: ${LIBFT} ${PRINTF}
	@${CC} ${SRCS} ${LIBFT} ${PRINTF} ${FLAGS} -o ${NAMEC}
${NAMES}: ${LIBFT} ${PRINTF}
	${CC} ${SRSS} ${LIBFT} ${PRINTF} ${FLAGS} -o ${NAMES}

clean:
	@rm -f ${NAMEC}
	@rm -f ${NAMES}
	@make clean -C Libft
	@make clean -C ft_printf
	@clear
	@echo "	╔══════════════════════════╗"
	@echo "	║ ✅ Cleaned Successfully! ║"
	@echo "	╚══════════════════════════╝"

fclean: clean
	@rm -f ${LIBFT}
	@rm -f ${PRINTF}
	@echo "	╔══════════════════════════╗"
	@echo "	║ 🗑️  Full Clean Done!      ║"
	@echo "	╚══════════════════════════╝"

re: fclean all

