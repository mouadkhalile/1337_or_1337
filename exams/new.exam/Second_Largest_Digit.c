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
int     Digits(int x)
{
    int count = 0;
    while(x > 0)
    {
        count++;
        x /= 10;
    }
    ft_putnbr(count), write(1, "\n", 1);
    return count;
}
int     S_largest(int x)
{
    int d, i, j;
    d = Digits(x);
    int arry[d];

    i = 0;
    while(i < d) {
        arry[i] = (x % 10);
        x /= 10;
        i++;
    }
    i = 0;
    while(i < d) {
        j = i + 1;
        while(j < d)
        {
            if (arry[i] > arry[j]) {
            int box = arry[i];
            arry[i] = arry[j];
            arry[j] = box;}
            j++;
        }
        i++;
    }
    if (d == 1)
        return arry[d - 1];
    return arry[d - 2];
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    int x = atoi(v[1]);
    x = S_largest(x);

    ft_putnbr(x);
}