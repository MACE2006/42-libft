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

# Variable for output file name
NAME = libft.a

# Mandatory part 1 files
MANPART1 = ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isdigit.c ft_isprint.c ft_memset.c ft_bzero.c

#All source files combined
SRC = ${MANPART1}

#All Object files combined
OBJS = ${SRC:.c=.o}

CC = gcc #Compiler
RM = rm -f #Remove command with force flag
CFLAGS = -Werror -Wall -Wextra #Compiler flags
INCLUDE = -I . #Include flag for compiler

#Compile .c files to .o files and include header files but stops before linking
.o:.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

#Compiles object files to a .a library
$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

#The first and default targer. Will run the previous command
all: ${NAME}

#Removes all the object files
clean: 
	${RM} ${OBJS}

#Removes all objects files and the output(compiled) file
fclean:
	${RM} ${NAME}

#Rebuilds the entire program
re: fclean all

#Declare the targets
.PHONY: all clean fclean re	