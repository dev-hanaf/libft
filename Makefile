# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 13:15:28 by ahanaf            #+#    #+#              #
#    Updated: 2023/11/02 14:56:30 by ahanaf           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

file = main.c
files += isalpha.c

dispaly:
	echo "hello world"

all: dispaly
	cc -Wall -Wextra -Werror $(file) ft_isalpha.c -o cprogram
test:

build:
	cc -Wall -Wextra -Werror $(file) ft_isalpha.c -o test.o
clean:
	@rm *.o
	@echo "`date` done" > log.txt

#1)define Variable

#file = main.c
#files += isalpha.c

#2)disaple Echo
#	Using @ ex : @echo "hello world"

#3)Acces external scripts
#	example 
#		test:
#			python analysis.py