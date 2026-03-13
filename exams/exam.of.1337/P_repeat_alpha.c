#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int n)
{
    if (n == -2147483648)
        write(1, "-2147483648", 11);
    else if (n < 0)
        (ft_putchar('-'), ft_putnbr(-n));
    else if (n > 9)
        (ft_putnbr(n/10), ft_putchar(n%10+'0'));
    else
        ft_putchar(n+'0');
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i, rp;
        i = 0;
        while(v[1][i])
        {
            rp = 0;
                    if (v[1][i] >= 'A' && v[1][i] <= 'Z')
                    {
                        rp = (v[1][i] - 'A') + 1;
                        
                        while(rp != 0)
                        {
                            ft_putchar(v[1][i]);
                            rp--;
                        }

                    }
                    else if (v[1][i] >= 'a' && v[1][i] <= 'z')
                    {
                        rp = (v[1][i] - 'a') + 1;
                        
                        while(rp != 0)
                        {
                            ft_putchar(v[1][i]);
                            rp--;
                        }
                    }
                    else {
                        ft_putchar(v[1][i]);
                    }
        i++;
        }
    }
    write(1, "\n", 1);
}