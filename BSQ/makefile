# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 13:56:38 by cgutierr          #+#    #+#              #
#    Updated: 2020/02/25 18:27:05 by cgutierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/main.c srcs/print.c srcs/get_tab.c srcs/atoi.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re