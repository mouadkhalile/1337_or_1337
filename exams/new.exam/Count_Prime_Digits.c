#include <unistd.h>
void    ft_putnbr(int n) {
    long nb;

    nb = n;
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb > 9) {
        ft_putnbr(nb / 10);
    }
    char c = (nb % 10) + '0';
    write(1, &c, 1);
}
int     atoi(char *str)
{
    int i = 0, x = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            x = x * 10 + (str[i] - '0');
    i++;
    }
    return x;
}
int     prime(int x)
{
    int count = 0;

    while(x > 0)
    {
        int z = (x % 10);
        if (z == 2 || z == 3 || z == 5 || z == 7) count++ ;
        x /= 10;
    }
    return count;
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    
    int x = atoi(v[1]);
    x = prime(x);

    ft_putnbr(x);
}