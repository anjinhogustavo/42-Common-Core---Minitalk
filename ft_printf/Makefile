CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putchar.c ft_putnbr.c \
		ft_putstr.c ft_usgnbr.c ft_pointeradd.c ft_hexadecimal.c

NAME = libftprintf.a
PRIC = ar rcs
RM = rm -f
OBJS = $(SRCS:.c=.o)
${NAME}: ${OBJS}
	${PRIC} ${NAME} ${OBJS}
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all
.PHONY : all clean fclean re
