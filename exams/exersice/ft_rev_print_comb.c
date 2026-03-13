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
void	ft_rev_print_comb(void)
{
    int a, b, c;

    a = 7;
    while(a >= 0)
    {
            b = a + 1;
            while(b >= 1)
            {
                c = b + 1;
                while(c >= 2)
                {
                    ft_putnbr(a);
                    ft_putnbr(b);
                    ft_putnbr(c);
                    write(1, ", ", 2);
                    
                c--;    
                }
            b--;    
            }
        a--;    
    }
}
int main()
{
    ft_rev_print_comb();
}
