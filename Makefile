# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvorley <cvorley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 17:00:19 by cvorley           #+#    #+#              #
#    Updated: 2025/10/24 10:09:18 by cvorley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable for output file name
NAME = libft.a

#Mandatory part 1 files
MANPART1 = ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isdigit.c ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c \
		ft_strlcat.c ft_memmove.c ft_strchr.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
		ft_toupper.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

#Mandatory part 2 files
MANPART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
#All source files combined
SRC = ${MANPART1} ${MANPART2}

#All Object files combined
OBJS = ${SRC:.c=.o}

CC = cc #Compiler
RM = rm -f #Remove command with force flag
CFLAGS = -Werror -Wall -Wextra #Compiler flags
INCLUDE = -I . #Include flag for compiler

#Compile .c files to .o files and include header files but stops before linking
.o:.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

#Compiles object files to a .a library
$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

#The first and default targert. Will run the previous command
all: ${NAME}

#Removes all the object files
clean: 
	${RM} ${OBJS}

#Removes all objects files and the output(compiled) file
fclean: clean
	${RM} ${NAME}

#Rebuilds the entire program
re: fclean all

#Declare the targets
.PHONY: help all clean fclean re	