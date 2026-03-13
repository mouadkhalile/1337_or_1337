#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int spelling(char *str, char *sacend, char i)
{
    int j, x, f, t, v;
    j = 0, x = 0, f = 0, t = 0, v = 0;
    while(sacend[j])
    {
        f = i, t = j, x = 0;
        while(sacend[t] && str[f] && sacend[t] == str[f])
            t++, f++, x++;
        if (v < x)
            v = x;
        j++;
    }
    return v;
}
void    ft_putstr(char *str, int i, int mx)
{
    while(i < mx)
        ft_putchar(str[i]), i++;
}
int     main(int ac, char **v)   
{                              
    if (ac != 3)
        return 0;
    int i, j, x, avrg;
    i = 0, x = 0, avrg = 0, j = 0;
    while(v[1][i])
    {
        x = spelling(v[1], v[2], i);
        if (x > avrg)
            avrg = x, j = i;
    i++;
    }
    if (avrg <= 0)
        return 0;
    printf("%d => ", avrg);
    ft_putstr(v[1], j, j + avrg)
}