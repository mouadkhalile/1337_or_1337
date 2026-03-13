#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int repead(char *str, char c, int x)
{
    int i, count;
    i = 0, count = 0;
    while(str[i])
    {
        if (str[i] == c)
            count++;
        i++;
    }
    if (x == 1)
        count--;
    if (count == 0)
        return 0;
    else
        return 1;
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0; 
    int i = 0;
    while(v[1][i])
    {
        if (!repead(v[1] ,v[1][i], 1))
        {
            if (!repead(v[2], v[1][i], 2))
            {
                 ft_putchar(v[1][i]);
                 return 0;
            }  
        }
        i++;
    }
    write(1, "none", 4);
    return 0;
}