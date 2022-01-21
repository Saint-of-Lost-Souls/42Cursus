#include <unistd.h>

void ft_putchar(char z)
{
    write(1, &z, 1);
}
