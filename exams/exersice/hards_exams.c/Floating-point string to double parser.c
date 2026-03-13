#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
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
int intstr(char *str)
{
    int i = 0, x = 0, min = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            x = x * 10 + (str[i] - '0');
        else if (str[i] == '.')
            break;
        else if (str[i] == '-')
            min++;

    i++;
    }
    if (min % 2 != 0)
        x = -x;
    
    return x;
}
int     pointup(char *str)
{
    int i = 0;
    while(str[i] && str[i] != '.') 
        i++;
    double j = 0;
    double s = 10;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            j = j + ((str[i] - '0') / s);
            s = s * 10;
        }
        i++;
    }
    return j;
}

int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    int x = intstr(v[1]);
    int j = pointup(v[1]);
    ft_putnbr(x + j);
}