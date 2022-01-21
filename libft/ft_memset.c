
#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char* p = str;

    while(n--)
    {
        *p++ = (unsigned char)c;
    }
    return str;
}


int main () {
   char str[50];

   strcpy(str,"This cake is a lie");
   puts(str);

   ft_memset(str,' ',5); // replace the first 7 chars with $
   puts(str);
   
   return(0);
}