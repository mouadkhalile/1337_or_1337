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
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i, start, end;
        
        i = 0;
        start = 0, end = 0;
        while(v[1][i])
        {
            while (v[1][i] && v[1][i] == ' ')
            {
                ft_putchar(v[1][i]);
                i++;
            }
            start = i;
            while (v[1][i] && v[1][i] != ' ')
                i++;
            end = i - 1;

            while (end >= start)
            {
                ft_putchar(v[1][end]);
                end--;
            }
            i++;
        }
    }
}