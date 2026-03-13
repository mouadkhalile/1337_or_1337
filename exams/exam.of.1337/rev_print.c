#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
       int i = 0;
        while(v[1][i]) i++;
        i--;
        while(i >= 0)
        {
            ft_putchar(v[1][i]);
            i--;
        }
    }
    write(1, "\n", 1);
}