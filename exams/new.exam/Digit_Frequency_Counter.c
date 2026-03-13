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
int     DFC(int x1, int tg)
{
    int count = 0;
    while(x1 > 0)
    {
        if (x1 % 10 == tg)
            count++;
        x1 /= 10;
    }
    return count;
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;
        
    int x1, tg, count;
    x1 = atoi(v[1]), tg = atoi(v[2]);
    
    count = DFC(x1, tg);
    ft_putnbr(count);
}
