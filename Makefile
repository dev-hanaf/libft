# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 13:15:28 by ahanaf            #+#    #+#              #
#    Updated: 2023/11/02 14:22:59 by ahanaf           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

file = main.c
files += isalpha.c

dispaly:
	echo "hello world"

all: dispaly
	cc -Wall -Wextra -Werror $(file) ft_isalpha.c -o cprogram
test:



clean:
	@rm *.o
	@echo "`date` done" > log.txt

#define Variable

#file = main.c
#files += isalpha.c