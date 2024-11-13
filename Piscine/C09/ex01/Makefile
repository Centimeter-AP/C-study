CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NAME		= libft.a

SRCS 		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS		= ${SRCS:.c=.o}

INCLUDES	= includes/ft.h

RM			= rm -f

all: 		${NAME}

${OBJS}:	${SRCS}
			${CC} ${CFLAGS} -c -o $@ -I ${INCLUDES} $<

${NAME}:	${OBJS}
			ar cr ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re