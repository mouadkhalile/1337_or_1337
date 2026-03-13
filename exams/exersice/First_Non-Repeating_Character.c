#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int apeer_once(char *str, char c)
{
    int i = 0, same = 0;
    while(str[i])
    {
        if (str[i] == c)
            same++;
        i++;
    }
    if (same == 1)
        return 1;
    else
        return 0;
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    int i = 0;
    while(v[1][i])
    {
        if (apeer_once(v[1], v[1][i]))
        {
            ft_putchar(v[1][i]);
            return 0;
        }
        i++;
    }
    write(1, "nothing", 7);
    return 0;
}