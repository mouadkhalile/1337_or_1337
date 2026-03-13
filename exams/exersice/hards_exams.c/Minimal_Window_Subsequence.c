#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int emptystr(char *str)
{
    int i = 0;
    if (str[0] == '\0')
        return 1;
    return 0;
}
int strtall(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}
void Subsequence(char *str, char *pattenr)
{
    int i, j, x, count, p, max, end;
    i = 0, max = 1000;
    while(str[i])
    {
        if (str[i] == pattenr[0])
        {
            j = i, x = 0;
            while(str[j] && pattenr[x])
            {
                if (str[j] == pattenr[x])
                    x++;
            j++;
            }
            count = j - i;   
        if (!pattenr[x] && count < max)
            max = count, p = i, end = j;
        }
    i++;
    }
    if (max == 1000)
    return;

    while(p < end)
        ft_putchar(str[p++]);
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;

    if (emptystr(v[1]) || emptystr(v[2]) || strtall(v[1]) < strtall(v[2]))
    {
        write(1, "one of two string are empty or pattern is biggenr then source", 61);
        return 0;
    }
    Subsequence(v[1], v[2]);
}