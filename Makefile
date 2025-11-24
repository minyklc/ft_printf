# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minpple <minpple@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/23 14:26:01 by minpple           #+#    #+#              #
#    Updated: 2025/11/23 14:48:28 by minpple          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_printf.c \
		put_nbr.c \
		put_conversion.c \

CC = cc -Wall -Werror -Wextra
OBJ = $(FILES:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all

.PHONY : all clean fclean re

