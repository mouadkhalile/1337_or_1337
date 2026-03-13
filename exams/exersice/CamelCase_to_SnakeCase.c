#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    int i = 0;
    while(v[1][i])
    {
        
        if ((i == 0) && (v[1][i] >= 'A' && v[1][i] <= 'Z'))
            ft_putchar(v[1][i] + 32);
        else if (v[1][i] >= 'A' && v[1][i] <= 'Z')
            ft_putchar('_'), ft_putchar(v[1][i] + 32);
        else
            ft_putchar(v[1][i]); 
    i++;    
    }
}