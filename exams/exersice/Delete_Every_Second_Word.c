#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    int i;

    i = 0;
    while(v[1][i])
    {
        while(v[1][i] && v[1][i] == ' ')
            i++;
        while(v[1][i] && v[1][i] != ' ')
        {
            ft_putchar(v[1][i]);
            i++;
        }
        // ft_putchar(' ');
        while(v[1][i] && v[1][i] == ' ')
            ft_putchar(v[1][i] ), i++;
        while(v[1][i] && v[1][i] != ' ')
            i++;
        
    }
}