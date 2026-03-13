#include <unistd.h>
void    ft_putnmbr(int nb)
{
    long x = nb;
    if (x < 0) { write(1, "-", 1), x = -x; }
    if (x > 9)
        ft_putnmbr(x / 10);
    char c = (x % 10) + '0';
    write(1, &c, 1);
}
int     atoi(char *str)
{
    int i, x;
    i = 0, x = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            x = x * 10 + (str[i] - '0');
        i++;
    }
    return x;
}
int     Analyzer(int x)
{
    if (x < 10)
        return x;
    
    return ((x % 10) * (x % 10)) + validator(x / 10);
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    int x = atoi(v[1]);
    int res = Analyzer(x);

    ft_putnmbr(res);
}