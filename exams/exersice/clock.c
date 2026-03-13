#include <unistd.h>
void    ft_putchar(char c)
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

int     main(void)
{
    int h = 0, m = 0, s = 0;

    while (h < 24)
    {
        m = 0;
        while (m < 60)
        {
            s = 0;
            while (s < 60)
            {
                write(1, "\r", 1);

                            if (h < 10)
                                ft_putnbr(0);
                            ft_putnbr(h);
                            write(1, " : ", 3);

                            if (m < 10)
                                ft_putnbr(0);
                            ft_putnbr(m);
                            write(1, " : ", 3);

                            if (s < 10)
                                ft_putnbr(0);
                            ft_putnbr(s);

              //  fflush(stdout);   

                sleep(1); 
                s++;
            }
            m++;
        }
        h++;
    }
}
