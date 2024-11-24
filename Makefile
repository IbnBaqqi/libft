# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 09:08:39 by sabdulba          #+#    #+#              #
#    Updated: 2024/11/24 14:57:59 by sabdulba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##SRC = $(wildcard *.c) #ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c
NAME = libft.a
FLAG = -Wall -Wextra -Werror
CORE = $(shell ls src/*.c)
PRINTF = $(shell ls ftprintf/*.c)
SRC = $(CORE) $(PRINTF)
OBJ := $(SRC:%.c=obj/%.o)

LIBC = ar rc $(NAME)
LIBR = ranlib $(NAME)

CC = cc
INCLUDE := -I./inc -I./ftprintf

RM = rm -rf
EXEC = libft

all : $(NAME)

#obj :
#	mkdir -p obj

obj/%.o : %.c 
	mkdir -p $(@D)
	$(CC) $(FLAG) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJ)
	$(LIBC) $(OBJ)
	$(LIBR)

clean :
	$(RM) obj

fclean : clean
	$(RM) $(NAME)

re : fclean all

#$(MAIN_OBJ): $(MAIN)
#	$(CC) $(FLAG) -c $(MAIN) -o $(MAIN_OBJ)
#run : $(NAME) $(MAIN_OBJ)
#	$(CC) $(FLAG) $(MAIN_OBJ) -L. -lft -o $(EXEC)
#	./$(EXEC)