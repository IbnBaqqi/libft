SRC = $(wildcard *.c) #ft_memset.c ft_bzero.c ft_memcpy.c #ft_memccpy.c
OBJ := $(SRC:%.c=%.o)
NAME = libft.a
LIBC = ar rc $(NAME)
LIBR = ranlib $(NAME)
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror
MAIN_DIR = Test
MAIN = $(MAIN_DIR)/main.c
MAIN_OBJ = $(MAIN_DIR)/main.o
EXEC = program

%.o : %.c
	$(CC) $(FLAG) -c $< -o $@

$(NAME) : $(OBJ)
	$(LIBC) $(OBJ)
	$(LIBR)

$(MAIN_OBJ): $(MAIN)
	$(CC) $(FLAG) -c $(MAIN) -o $(MAIN_OBJ)

all : $(NAME)

clean :
	$(RM) $(OBJ) $(MAIN_OBJ) $(EXEC) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

run : $(NAME) $(MAIN_OBJ)
	$(CC) $(FLAG) $(MAIN_OBJ) -L. -lft -o $(EXEC)
	./$(EXEC)