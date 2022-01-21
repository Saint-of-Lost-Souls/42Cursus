#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_strlen(char *str);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strchr(const char *str, int c); //not written
void    *ft_memset(void *str, int c, size_t n); // not written
#endif