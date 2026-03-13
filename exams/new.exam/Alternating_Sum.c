#include <unistd.h>
void    ft_putnbr(int n) {
    long nb;

    nb = n;
    if (nb < 0) {
        nb = -nb;
        if (nb > 9)
            write(1, "-", 1);
    }
    if (nb > 9) {
        ft_putnbr(nb / 10);
    }
    char c = (nb % 10) + '0';
    write(1, &c, 1);
}
int     alternating(char *str)
{
    int i, odd, even;
    odd = 0, even = 0, i = 0;
    while(str[i])
    {
        if (i % 2 == 0)
            even += (str[i] - '0');
        else
            odd += (str[i] - '0');
    i++;
    }
    return (odd - even);
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    
    int x = alternating(v[1]);
    ft_putnbr(x);
}