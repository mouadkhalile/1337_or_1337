#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int ft_nmb(char *str)
{
    int i = 0;
    int x = 0;

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        x = x * 10 + (str[i] - '0');
        i++;
    }
    return x;
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;

    int i, x, len;

    x = ft_nmb(v[2]);
    len = ft_strlen(v[1]);
    i = x - 1;
    if (!x)
        return 0;
    while(i < len)
    {
            ft_putchar(v[1][i]);
        i += x;
    }
}