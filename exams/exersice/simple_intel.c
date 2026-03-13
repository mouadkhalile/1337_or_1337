#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int cheakB(char *str, int i)
{
    int j = i - 1;
    while(j >= 0)
    {
        if (str[j] == str[i])
            return 1;
        j--;
    }
    return 0;
}
int cheakup(char *str, int i)
{
    int j = i + 1;
    while(str[j])
    {
        if (str[j] == str[i])
            return 1;
        j++;
    }
    return 0;
}
int     main(int ac, char **v)
{
    if (ac != 2)
        return 0;
    int i = 0;
    while(v[1][i])
    {
        if (cheakB(v[1], i) == 0 && cheakup(v[1], i) == 1)
            ft_putchar(v[1][i]);
        i++;
    }
}