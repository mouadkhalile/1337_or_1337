#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    int i, j;

    i = 0;
    while(v[1][i])
    {
        if (v[1][i] != ' ')
        {
            j = i;
            while(j >= 0)
                ft_putchar(v[1][i]), j--;
        }
        else
            ft_putchar(' ');
        i++;
    }
}