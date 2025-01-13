# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 18:23:58 by fbanzo-s          #+#    #+#              #
#    Updated: 2025/01/05 18:23:58 by fbanzo-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_calloc.c \
ft_isdigit.c ft_isprint.c ft_strchr.c ft_strdup.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c ft_memchr.c \
ft_memcpy.c ft_memcmp.c ft_memmove.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re