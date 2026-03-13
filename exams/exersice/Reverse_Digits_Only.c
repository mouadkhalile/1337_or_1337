#include <unistd.h>
void ft_putcahr(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    int i, j;
    char bx[100], bx[0] = '\0';

    i = 0, j = 0;
    while(v[1][i])
    {
        if (v[1][i] >= '0' && v[1][i] <= '9')
        {
            bx[j] = v[1][i], j++; 
            bx[j] = '\0';
        }
        i++;
    }
    i = 0, j--;
    while(v[1][i])
    {
        if (v[1][i] >= '0' && v[1][i] <= '9')
            ft_putcahr(bx[j]), j--;
        else 
            ft_putcahr(v[1][i]);
    i++;
    }
}