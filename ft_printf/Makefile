# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlachau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 18:00:32 by rlachau           #+#    #+#              #
#    Updated: 2021/11/07 17:57:46 by rlachau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_search_type.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_put_p.c\
	ft_putnbr_base.c\
	ft_putunbr_base.c\
	ft_printf.c\

OBJS =	${SRCS:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	
all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all re clean fclean
