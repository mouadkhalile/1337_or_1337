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
    if (ac == 2)
    {
        int i, letters, digits, symbols;
        
        i = 0, letters = 0, digits = 0, symbols = 0;
        while(v[1][i])
        {
            if ((v[1][i] >= 'a' && v[1][i] <= 'z') || (v[1][i] >= 'A' && v[1][i] <= 'Z'))
                letters++;
            else if (v[1][i] >= '0' && v[1][i] <= '9')
                digits++;
            else{
                symbols++;
            }
            i++;
        }
        if (i == 0)
            return (write(1, "Empty string\n", 13), 0);
            
        write(1, "Letters: ", 9), ft_putnmbr(letters), write(1, "  Percentage: ", 14) ,ft_putnmbr((letters * 100) / i), write(1, " % \n", 5);
        write(1, "Digits: ", 8), ft_putnmbr(digits), write(1, "  Percentage: ", 14) ,ft_putnmbr((digits * 100) / i), write(1, " % \n", 5);
        write(1, "symbols: ", 9), ft_putnmbr(symbols), write(1, "  Percentage: ", 14) ,ft_putnmbr((symbols * 100) / i), write(1, " % \n", 5);
    }
}