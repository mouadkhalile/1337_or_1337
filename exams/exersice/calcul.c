#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int  ft_culcul(int x, char c, int x2)
{
    if ((c == '/' || c == '%') && x2 == 0)
    {
        write(1, "error", 5);
        return 0;
    }
        if (c == '+')
            return x + x2;
        else if (c == '-')
            return x - x2;
        else if (c == '*')
            return x * x2;
        else if (c == '/')
            return x / x2;
        else if (c == '%')
            return x % x2;
        else
        {
            write(1,"error", 5);
            return 0;
        }
}
void    ft_putnbr(int nb)
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
int     main(int ac, char **v)
{
    if (ac == 4)
    {
        int i, x, x2;
        x = 0;
        i = 0;
                    while(v[1][i])
                    {
                        if (v[1][i] >= '0' && v[1][i] <= '9')
                        {
                            x = x * 10 + (v[1][i] - '0');
                        }
                    i++;
                    }
        x2 = 0;
        i = 0;
                    while(v[3][i])
                    {
                        if (v[3][i] >= '0' && v[3][i] <= '9')
                        {
                            x2 = x2 * 10 + (v[3][i] - '0');
                        }
                    i++;
                    }


    int res = ft_culcul(x, v[2][0], x2);
    ft_putnbr(res);
    }
    write(1, "\n", 1);
}