#include <unistd.h>

#ifndef FT_PUTCHAR_C
#define FT_PUTCHAR_C

#endif

void ft_putchar(char z)
{
    char a;
    char b;    
    char c;
    a = '/';
    b = '*';
    c = '\\';

    write(1, &z, 1);
}
