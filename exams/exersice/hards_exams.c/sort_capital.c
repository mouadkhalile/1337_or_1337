#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        ft_putchar(str[i++]);
}
int     main(int ac, char **v)
{
    int i = 0;
    while(v[1][i])
    {
        int j = i + 1;
        while(v[1][j])
        {
            if (v[1][i] >= v[1][j])
            {
                char c = v[1][i];
                v[1][i] = v[1][j];
                v[1][j] = c;
            }
            j++;
        }
        i++;
    }
    ft_putstr(v[1]);
}