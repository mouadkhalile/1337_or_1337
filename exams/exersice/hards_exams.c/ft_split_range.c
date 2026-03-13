#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnmbr(int nb)
{
    char box[10];
    int i = 0;

    if (nb == 0)
    {
        ft_putchar('0');
        return;
    }
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    while (nb > 0)
    {
        box[i] = (nb % 10) + '0';
        nb = nb / 10;
        i++;
    }
    while (--i >= 0)
        ft_putchar(box[i]);
}
int return_atoi(char *str)
{
    int i = 0;
    int x = 0;
    int nigative = 0;
    while(str[i])
    {
        if (str[0] == '-')
            nigative = 1;
        x = x * 10 + (str[i] - '0');
        i++;
    }
    if (nigative)
        x = -x;
    return x;
}
int tall_of_array(int start, int end, int step)
{
    int x = 0;
    while(start < end)
        x++, start += step;
    return x;
}
int ft_split_range(int **arr, int start, int end, int step)
{
    if (start >= end || step <= 0)
    {
        *arr = NULL;
        return 0;
    }

    int tall = tall_of_array(start, end, step);
    int *tox = malloc(sizeof(int) * tall);

    if (tox == NULL)
    {
        *arr = NULL;
        return 0;
    }

    int i, res;
    i = 0, res = start;
    while(i < tall)
    {
        tox[i] = res;
        res += step;
        i++;
    }

    *arr = tox;
    return tall;
}
int     main(int ac, char **v)
{
    if (ac != 4)
        return 0;

    int start, end, step;
    start = return_atoi(v[1]), end = return_atoi(v[2]), step = return_atoi(v[3]);

    int *rox;

    int value = ft_split_range(&rox, start, end, step);

    if (value == 0)
            return 0;
    int i = 0;
    while(i < value)
        ft_putnmbr(rox[i]),ft_putchar(' '), i++;

    free(rox);
    write(1, "\n value is ->  ", 15), ft_putnmbr(value);
}