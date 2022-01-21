#include <unistd.h>
#include "ft_putchar.c"

void ft_putchar(char z);

void    ft_rush01(int width, int height)
{
    int column = 1;
    int row = 1;    

   // top of rectangle
    if(row == 1 && column == 1)
    {        
        ft_putchar('/');
        column++;
    }
    while(column < width)
    {
        ft_putchar('*');
        column++;
    }
    if(column == width)
    {
        ft_putchar('\\');
        write(1, "\n", 1); 
    }
    column = 1;  
    row++; // row = 2
   
    // rows
    while(row < height)        
    {
        if(column == 1)        
        {
            ft_putchar('*');           
            column++;         
        }         
        while(column < width)   
        {
            write(1, " ", 1);
            column++;           
        }
        if(column == width)  
        {
            ft_putchar('*');
            write(1, "\n", 1);                  
        }    
        row++;
        column = 1;                                                  
    } 

    // bottom of rectangle
    if(row == height && column == 1)
    {        
        ft_putchar('\\');
        column++; 
    }
    while(column < width)
    {
        ft_putchar('*');
        column++;
    }
    if(column == width)
    {
        ft_putchar('/');
        write(1, "\n", 1); 
    }
    column = 1;      
}
