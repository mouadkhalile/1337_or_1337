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
    if (ac ==2)
    {
        int i, count;

        i = 0, count = 0;
        while(v[1][i])
        {
            if ((v[1][i] >= 'a' && v[1][i] <= 'z') || (v[1][i] >= 'A' && v[1][i] <= 'Z'))
            {
                if (v[1][i+1] && (v[1][i+1] >= '0' && v[1][i+1] <= '9')) 
                    count++;
            }
            i++;
        }
        write(1, "Patterns: ", 10), ft_putnmb(count);
    }
}