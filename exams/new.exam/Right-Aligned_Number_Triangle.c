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
void    staircase(int x)
{
    int i, h;
    i = 1;
    while(i <= x)
    {
        int space = x - i;
        while (space > 0) {write(1, " ", 1), space--;}
        
        h = 1;
        while(h <= i)
        {
            ft_putnmbr(h);
            h++;
        }
        write(1, "\n", 1);
        i++;
    }
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;

    int x = atoi(v[1]);
    staircase(x);
}