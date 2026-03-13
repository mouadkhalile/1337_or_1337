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
    int i, tall, pt, b;
    int sorts[20][20];
    i = 0, j = 0, b = 0;
    while(v[1][i])
    {
        if (v[1][i] != ' ')
        {
            pt = i, tall = 0;
            while (v[1][i] && v[1][i] != ' ')
                i++, tall++;
            sorts[b][pt];
            b++;
        }
        else
            i++;
    }
    int t, k, swap;

    t = 0, swap = 0, k = 0;
    while (t < b)
    {
        while (k < b)
        {
            swap = sorts[b+1];
            sorts[b+1] = sorts[b];
            sorts[b] = swap;
            b++;
            k++;
        }


        t++;
    }



    ft_putword(v[1], pt);
}