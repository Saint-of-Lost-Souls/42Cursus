int     ft_strnlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {  
        i++;
    }
    return (i);
} 
