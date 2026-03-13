#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        ft_putchar(str[i]), i++;
}
int intsize(int x, int j)
{
    if (x == 0)
        return j;
    
    return intsize(x / 10, j + 1);
}
void ft_putatoi(int x, char *str, int ng)
{
    char box[10];
    int f = 0, i = 0;

    if (x < 0)
        x = -x; 

    while (x != 0)
    {
        box[f] = (x % 10) + '0';
        f++;
        x /= 10;
    }

    if (ng == 1)
    {
        str[i] = '-';
        i++;
    }

    f--;
    while (f >= 0)
    {
        str[i] = box[f];
        i++;
        f--;
    }

    str[i] = '\0';
}
char    *ft_itoa(int nbr)
{
    int size;
    if (nbr != 0)
        size = intsize(nbr, 0);
    else 
        size = 1;

    int ng = 0;
    if (nbr < 0)
        ng = 1, size++;

    char *stn = malloc(sizeof(char) * (size + 1));
    if (stn == NULL)
        return NULL;

    ft_putatoi(nbr, stn, ng);
    
    return stn;
}
int     main()
{
    int x = -235;
    char *stn = ft_itoa(x);
    ft_putstr(stn);
    free(stn);
}