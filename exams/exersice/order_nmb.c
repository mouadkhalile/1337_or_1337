#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnmbr(int nb)
{
    char box[10];
    int i = 0;

    if (nb == 0)
    {
        ft_putchar('0');
        return;
    }
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    while (nb > 0)
    {
        box[i] = (nb % 10) + '0';
        nb = nb / 10;
        i++;
    }
    while (--i >= 0)
        ft_putchar(box[i]);
}
int     main(int ac, char **v)
{   
    
ft_putnmb(-2);
}