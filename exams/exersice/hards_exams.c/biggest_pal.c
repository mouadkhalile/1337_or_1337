#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     strlen(char *str)
{
    int i = 0;
    while(str[i]) 
    {
        i++;
    }
    return i;
}
int     is_plindrom(char *str, int i, int len)
{
    while(i <= len)
    {
        if (str[i] != str[len])
            return 0;
        
        i++, len--;
    }
    return 1;
}
int     pal(char *str, int i, int len)
{
    while(i <= len)
    {

        if (str[i] == str[len] && is_plindrom(str, i, len))
        {
            return (len - i + 1);
        }
        else
            len--;
    }
    return -1;
}
int     main(int ac, char **v)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    int len = strlen(v[1]) - 1;

    int i = 0, p = 0, long_pal = 0;
    while(v[1][i])
    {
        int x = pal(v[1], i, len);
        if (x >= long_pal)
            long_pal = x, p = i;
        i++;
    }
    int end = p + long_pal;
    while(p < end)
        ft_putchar(v[1][p++]);

    write(1, "\n", 1);
}
