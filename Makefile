##SRC = $(wildcard *.c) #ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c 
SRC = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c	ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
ft_atoi.c ft_isalpha.c ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
ft_bzero.c ft_isascii.c ft_memccpy.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c ft_putstr_fd.c	ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c
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

