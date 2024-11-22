##SRC = $(wildcard *.c) #ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c 
SRC = $(shell ls src/*.c)
OBJ := $(SRC:src%.c=obj%.o)
NAME = libft.a
LIBC = ar rc $(NAME)
LIBR = ranlib $(NAME)

CC = cc
FLAG = -Wall -Wextra -Werror
INCLUDE := -I./inc

RM = rm -rf
EXEC = libft

all : $(NAME)

obj :
	mkdir -p obj

obj/%.o : src/%.c | obj
	$(CC) $(FLAG) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJ)
	$(LIBC) $(OBJ)
	$(LIBR)

$(MAIN_OBJ): $(MAIN)
	$(CC) $(FLAG) -c $(MAIN) -o $(MAIN_OBJ)

clean :
	$(RM) $(MAIN_OBJ) $(EXEC) obj

fclean : clean
	$(RM) $(NAME)

re : fclean all

run : $(NAME) $(MAIN_OBJ)
	$(CC) $(FLAG) $(MAIN_OBJ) -L. -lft -o $(EXEC)
	./$(EXEC)