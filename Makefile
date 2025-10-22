# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 17:00:19 by cvorley           #+#    #+#              #
#    Updated: 2025/10/22 18:31:01 by cvorley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MANPART1 = ft_strlen.c

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