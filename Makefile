# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ganjinho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 19:19:03 by ganjinho          #+#    #+#              #
#    Updated: 2024/10/09 19:19:10 by ganjinho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                 Makefile Rules                               #
################################################################################

CC = cc -g
NAMEC = client
NAMES = server
PRINTF = ft_printf/libftprintf.a
FLAGS = -Wall -Werror -Wextra
SRCS = client.c
SRSS = server.c

all: ${NAMEC} ${NAMES}

${PRINTF}:
	@make -C ft_printf
${NAMEC}: ${PRINTF}
	@${CC} ${SRCS} ${PRINTF} ${FLAGS} -o ${NAMEC}
${NAMES}: ${PRINTF}
	@${CC} ${SRSS} ${PRINTF} ${FLAGS} -o ${NAMES}

clean:
	@rm -f ${NAMEC}
	@rm -f ${NAMES}
	@make clean -C ft_printf
	@clear
	@echo "	╔══════════════════════════╗"
	@echo "	║ ✅ Cleaned Successfully! ║"
	@echo "	╚══════════════════════════╝"

fclean: clean
	@rm -f ${PRINTF}
	@echo "	╔══════════════════════════╗"
	@echo "	║ 🗑️  Full Clean Done!      ║"
	@echo "	╚══════════════════════════╝"

re: fclean all
