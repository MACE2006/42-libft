# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 17:00:19 by cvorley           #+#    #+#              #
#    Updated: 2025/10/22 19:24:37 by cvorley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MANPART1 = ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isdigit.c ft_isprint.c ft_memset.c

SRC = ${MANPART1}

OBJS = ${SRC:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Werror -Wall -Wextra
INCLUDE = -I .

.o:.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re	