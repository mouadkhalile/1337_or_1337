#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;

    int i, j;

    i = 0, j = 0;
    while(v[1][i] || v[2][j])
    {
            if (v[1][i])
                ft_putchar(v[1][i]), i++;
            if (v[2][j])
                ft_putchar(v[2][j]), j++;
    }
}