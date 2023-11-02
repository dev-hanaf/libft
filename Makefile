# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 13:15:28 by ahanaf            #+#    #+#              #
#    Updated: 2023/11/02 18:17:52 by ahanaf           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#file = main.c
#files += isalpha.c

#dispaly:
#	echo "hello world"

#all: dispaly
#	cc -Wall -Wextra -Werror $(file) ft_isalpha.c -o cprogram
#test:

#build:
#	cc -Wall -Wextra -Werror $(file) ft_isalpha.c -o test.o
#clean:
#	@rm *.o
#	@echo "`date` done" > log.txt

#1)define Variable

#file = main.c
#files += isalpha.c

#2)disaple Echo
#	Using @ ex : @echo "hello world"

#3)Acces external scripts
#	example 
#		test:
#			python analysis.py

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c 
OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
