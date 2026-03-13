#include <unistd.h>
#include <stdio.h>
void   ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnmb(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    if (nb < 0)
    {
        ft_putchar(' ');
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnmb(nb / 10);
    }
    char c = (nb % 10) + 48;
    ft_putchar(c);
}

int     main(int argc, char **v)
{
if (argc > 1)
{
    int c = 1;
    while (c <= argc)
    {
        int i, n, t;
        n = 1;
        i = 0;
        t = 0;
        while(v[c][i])
        {
            while (v[c][t]) t++;
            t--;
            while(v[c][t])
            {
                if (v[c][t] != ' ' || t == 0) break;
            t--;
            }
            while (v[c][i] == ' ' || v[c][i] == '\t') i++;

            if (( i > 0 && (v[c][i-1] == ' ' || v[c][i-1] == '\t')) || i == 0)
                {
                    if(t >= i)
                        ft_putnmb(n);
                        n++;
                            ft_putchar(' ');
                            while (v[c][i] != ' ' && v[c][i] != '\0')
                            {
                                    ft_putchar(v[c][i]);
                                    i++;
                            }
                            ft_putchar(' ');
                            i--;
                }
            i++;
        }
        write(1, "\n", 1);
        c++;
    }
}
}