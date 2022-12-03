# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlopez-l <rlopez-l@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 12:15:44 by rlopez-l          #+#    #+#              #
#    Updated: 2022/12/03 19:02:52 by rlopez-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables

NAME = libft.a
HEADER = libft.h
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
INCLUDE = -I ./

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	  ft_memset.c ft_bzero.c ft_strncmp.c ft_memcpy.c ft_memchr.c \
	  ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c\
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
	  ft_split.c

OBJ = $(SRC:.c=.o)

i%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ 

#rules

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

.PHONY: clean fclean all re

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

