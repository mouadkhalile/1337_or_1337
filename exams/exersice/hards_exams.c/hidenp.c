#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}



int     hiden(char *str, char *hidd, int i)
{
    int h = 0;
    while(str[i])
    {
        if (str[i] == hidd[h])
            h++;
    i++;
    }
    if (hidd[h] == '\0')
        return 1;
    else
        return 0;
}
int     main(int ac, char **v)
{
    int i = 0;
    while(v[1][i])
    {
        if (v[1][i] == v[2][0] && hiden(v[1], v[2], i))
        {
            ft_putchar('1');
            return 0;
        }
        i++;
    }
    ft_putchar('0');
}
