#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnmb(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnmb(nb / 10);
    }
    char c = (nb % 10) + 48;
    ft_putchar(c);
}
int     main(int ac, char **v)
{
    int i, max, x;
    
    max = 0;
    i = 0;
    while(v[1][i])
    {
        x = 0;
        while (v[1][i] && (v[1][i] >= '0' && v[1][i] <= '9'))
        {
            x = x * 10 + (v[1][i] - '0');
            i++;
        }
        if (max < x)
            max = x;
    i++;
    }
    ft_putnmb(max);
}