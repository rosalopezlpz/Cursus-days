# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 12:15:44 by rlopez-l          #+#    #+#              #
#    Updated: 2022/10/24 22:14:44 by rlopez-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables

NAME = libft.a
OBJ = $(SRC:.c=.o)
HEADER = libft.h
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
INCLUDE = -I ./

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	  ft_memset.c ft_bzero.c ft_strncmp.c ft_memcpy.c ft_memchr.c \
	  ft_memcmp.c

%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ 

#rules

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

.PHONY: clean fclean all re

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: all fclean

