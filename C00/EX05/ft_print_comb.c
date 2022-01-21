#include <unistd.h>

void	ft_print_comb(void)
{

    /* the max that a = 7, a
    the max that b = 8, a + 1 
    the max that c = 9, b + 1

    a = 7, b != 7, c != 7
           b = 8, c != 8
 */

    char a;
    char b;
    char c;

    while(++a = 1)
    {
        while(++b = a + 1) 
        {
            while(++c = b + 1)
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
            }
        }
    }
}
    

/* 	char	nums[3]; // Init array 3

	nums[0] = '0' - 1; 
	while (++nums[0] <= '7')
	{
		nums[1] = nums[0] + 1 - 1;
		while (++nums[1] <= '8')
		{
			nums[2] = nums[1] + 1 - 1;
			while (++nums[2] <= '9')
			{
				write(1, &nums, 3);
				if (nums[0] != '7')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
} */
int main()
{
    ft_print_comb();
    return 0;    
}