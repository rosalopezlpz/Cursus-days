# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 12:15:44 by rlopez-l          #+#    #+#              #
#    Updated: 2022/10/22 17:40:59 by rlopez-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	  ft_memset.c ft_bzero.c ft_strcncmp.c

OBJ = $(SRC:.c=.o)
HEADER = libft.h
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
INCLUDE = -I ./

%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ 

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all 
.PHONY: clean fclean all re
