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
int     factorial(int x)
{
    int f = 1;
    while(x > 1)
    {
        f *= x;
        x--;
    }
    return f;
}
int     factorial_sum(int x)
{
    if (x <= 0) {return 0;}          
    int sum = 0;                          
    while(x > 0) {
        sum += factorial(x % 10);
        x /= 10;
    }
    return sum;
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    
    int x = atoi(v[1]);
    int res = factorial_sum(x);
    ft_putnbr(res);
}