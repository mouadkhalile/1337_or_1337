#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int strlen(char *str)
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
            int i, start, end, t;

            t = strlen(v[1]) - 1;

            while(t >= 0 && (v[1][t] == ' ' || v[1][t] == '\t'))
            {
                t--;
            }
            end = t;
            
            while(t >= 0 && (v[1][t] != ' ' && v[1][t] != '\t'))
            {
                t--;
            }
            start = t + 1;

            while(start <= end)
            {
                ft_putchar(v[1][start]);
                start++;
            }
    }
    write(1, "\n", 1);
}