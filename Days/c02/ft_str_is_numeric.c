#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_str_is_numeric(char *str)
{
    int i ;

    i = 0;

        while(str[i])
        {
            if (!(str[i] >= '0' && str[i] <= '9'))
                return 0;
            i++;
        }
        return 1;
}
int     main()
{
        char str[] = "213";

        printf(" %d \n", ft_str_is_numeric(str));
        
}