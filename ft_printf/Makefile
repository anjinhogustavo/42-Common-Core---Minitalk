CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putchar.c ft_putnbr.c \
       ft_putstr.c ft_usgnbr.c ft_pointeradd.c ft_hexadecimal.c \
       ft_atoi.c

NAME = libftprintf.a
PRIC = ar rcs
RM = rm -f
OBJS = $(SRCS:.c=.o)

# Alvo para criar a biblioteca
${NAME}: ${OBJS}
	${PRIC} ${NAME} ${OBJS}

# Regra para compilar arquivos .c em .o
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

# Alvo padrão
all: ${NAME}

# Limpar arquivos objeto
clean:
	${RM} ${OBJS}

# Limpar biblioteca e arquivos objeto
fclean: clean
	${RM} ${NAME}

# Recompilar tudo
re: fclean all

.PHONY: all clean fclean re

