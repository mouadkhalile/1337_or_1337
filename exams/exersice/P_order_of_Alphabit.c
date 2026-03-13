#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/****************************************/
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
/****************************************/
int     main(int ac, char **v)
{
    if (ac > 1)
    {
        int c, i, k;
        c = 1;
        while(ac > c)
        {

            i = 0;
            while(v[c][i])
            {
                k = 1;
                if (v[c][i] >= 'A' && 'Z' >= v[c][i])
                {
                    k = v[c][i] - 'A' + 1;
                                        ft_putchar(' ');
                   ft_putchar(v[c][i]);

                                    write(1, " => ", 4);

                    ft_putnmb(k);
                                        write(1, " |", 2);

                }
                else if (v[c][i] >= 'a' && 'z' >= v[c][i])
                {
                    k = v[c][i] - 'a' + 1;
                                        ft_putchar(' ');
                    ft_putchar(v[c][i]);

                                        write(1, " => ", 4);                   
                    ft_putnmb(k);
                                        write(1, " |", 2);
                }
                else {
                                        ft_putchar(' ');
                    ft_putchar(v[c][i]);
                                        write(1, " |", 2);
                }
                i++;
            }
            write(1, "\n", 1);
            c++;
        }
    }

write(1, "\n", 1);
}