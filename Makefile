# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 14:49:04 by mayoub            #+#    #+#              #
#    Updated: 2021/11/18 01:21:43 by mayoub           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	ft_printf.c \
			ft_putchar.c \
			ft_putchar_pf.c \
			ft_putstr_pf.c \
			ft_strlen.c \
			ft_putnbr.c \
			ft_putnbr_pf.c \
			ft_videur.c \
			ft_check.c \
			

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc

CFLAGS	= -Werror -Wall -Wextra

AR		= ar rc

RM		= rm -rf

.c_to_.o:
			${CC} ${CFLAGS} -o $< ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJB}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
