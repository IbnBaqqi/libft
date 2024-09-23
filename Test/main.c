#include <stdio.h>
#include "../libft.h"

void test_memset(void)
{
    printf("\n\n*****TESTING MEMSET*****\n\n");
    char str[2][25] = {"Abdul started 42 cursus","Abdul started 42 cursus"};
    ft_memset(str[0], '.', 5 * sizeof(char));
    memset(str[1], '.', 5 * sizeof(char));
    printf("ft_memset: %s", str[0]);
    printf("\n");
    printf("memset   : %s", str[1]);
}

void test_bzero(void)
{
    printf("\n\n*****TESTING BZERO*****\n\n");
    char str[25] = "Abdul started 42 cursus";
    //char ptr[40] = "Abdul started 42 cursus";
    ft_bzero(str + 5, 5 * sizeof(char));
    printf("ft_bzero: %s\n\n", str);
    
    for (int i = 0; i < 40; i++)
    {
        if (str[i] == '\0')
            printf("\\0");
        else
            printf("%c", str[i]);
    }
   // bzero(ptr + 5, 5 * sizeof(char));
    //printf("\n\n%s\n", ptr);
}

void test_memcpy()
{
    printf("\n\n*****TESTING MEMCPY*****\n\n");
    char s1[] = "Hello World";
    char s2[] = "Helsinki";
    char s3[] = "Hello World";
    char s4[] = "Helsinki";
    ft_memcpy(s1, s2, 8 * sizeof(char));
    printf("ft_memcpy: %s\n\n", s1);

    memcpy(s3, s4, 8 * sizeof(char));
    printf("memcpy: %s", s3);
}

void test_memccpy()
{
    printf("\n\n*****TESTING MEMCCPY*****\n\n");
    char s1[] = "Hello World";
    char s2[] = "Helsinki";
    char s3[] = "Hello World";
    char s4[] = "Helsinki";
    printf("Dst: Hello World.\nSrc: Helsinki.\nc = 'n'.\nExpected: W / World\n\n");
    char *ans = ft_memccpy(s1, s2, 'n', 8 * sizeof(char));
    char *ans1 = memccpy(s3, s4, 'n', 8 * sizeof(char));
    printf("ft_memccpy: %s", ans);
    printf("\n");
    printf("memcpy    : %s", ans1);
}

int main(void)
{
    test_memset();
    test_bzero();
    test_memcpy();
    test_memccpy();

    return 0;
}