#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putword(char *str, int pt)
{
   
    while(str[pt] && str[pt] != ' ')
    {
        ft_putchar(str[pt]);
        pt++;
    }
}
int     main(int ac, char **v)
{
    int i, tall, pt, f, j;

    i = 0, j = 0;
    while(v[1][i])
    {
        if (v[1][i] != ' ')
        {
            f = i, tall = 0;
            while (v[1][i] && v[1][i] != ' ')
                i++, tall++;
            if (tall > j)
                j = tall, pt = f;
        }
        else
            i++;
    }
    ft_putword(v[1], pt);
}