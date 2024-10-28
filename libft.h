#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/*Memory*/
void *ft_memset(void *str, int c, size_t len);
void ft_bzero(void *str, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);

int ft_isalpha (int c);
int ft_isdigit (int c)
#endif