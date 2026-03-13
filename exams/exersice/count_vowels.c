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
int main(int ac, char **v)
{
    if (ac == 2)
    {
        int i, count;

            i = 0;
            count = 0;
            while(v[1][i])
            {
                if (v[1][i] == 'a' || v[1][i] == 'e' || v[1][i] == 'i' || v[1][i] == 'o' || v[1][i] == 'u')
                {
                    count++;
                }
             i++;   
            }
                    ft_putnbr(count);
    }
write(1, "\n", 1);
}