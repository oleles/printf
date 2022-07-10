SOURCES	= 	ft_printf.c ft_printf_utils.c ft_printf_utils_2.c\
			ft_itoa_unsigned.c ft_convert_hexa.c 

NAME	= 	libftprintf.a

LIBFT	= 	./libft/libft.a

SRCS_PATH	= ./src/

SRCS	= 	${addprefix ${SRCS_PATH}, ${SOURCES}}

OBJS	= 	${SRCS:.c=.o}

CC		= 	gcc

RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror

%.o:		${SRCS_PATH}%.c
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${LIBFT}
			cp ${LIBFT} .
			mv libft.a ${NAME}
			ar rc ${NAME} ${OBJS}

${LIBFT}:
			make -C ./libft

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			make fclean -C ./libft
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re