#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
   if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}
int prime(int x)
{
    int nb = x - 1;
    while(nb > 1)
    {
        if (x % nb == 0)
            return 0;
        nb--;
    }
    return x;
}
int atoi(char *str)
{
    int i = 0;
    int x = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            x = x * 10 + (str[i] - '0');
        i++;
    }
    return x;
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int x, i, res;

            x = atoi(v[1]);
            res = 0;

            while(x > 1)
            {
                res += prime(x);
                x--;
            }
            ft_putnbr(res);
    }
    write(1, "\n", 1);
}