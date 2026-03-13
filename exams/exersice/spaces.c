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
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i, count, j;

        i = 0;
        while(v[1][i])
        {
            count = 0;
            if(v[1][i] == ' ')
            {
                j = i;
                while(v[1][j] == ' ' && v[1][j])
                {
                    count++;
                    j++;
                }
                i = j - 1;
            }
            if (count > 0)
                ft_putnbr(count);
            else{
                ft_putchar(v[1][i]);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}