#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i, lounge, end, x;

        i = 0, x = 0, end = 0;
        while(v[1][i])
        {
                lounge = 0;
                while(v[1][i] && v[1][i] != ' ')
                {
                    lounge++;
                    i++;
                }               
                if (lounge >= x)
                {
                    x = lounge;
                    end = i - 1;
                }
        if (v[1][i])
            i++;
        }
        while (end >= 0 && v[1][end] != ' ')
        {
            ft_putchar(v[1][end]);
            end--;
        }
    }
}