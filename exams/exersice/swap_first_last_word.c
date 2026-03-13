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
    if (ac != 2)
    return 0;
        int i, j, b;

        int space = 0;
        i = 0;

    while (v[1][i])
    {
        while(v[1][i] && v[1][i] == ' ')
            i++;
        while(v[1][i] && v[1][i] != ' ')
            i++;
        while(v[1][i] && v[1][i] == ' ')
            i++;
        if (v[1][i])
            space = 1;
    }
    if (!space)
    {
        i = 0;
        while (v[1][i])
        {
            ft_putchar(v[1][i]);
            i++;
        }
        ft_putchar('\n');
        return (0);
    }
        i = 0, b = 0;
        j = ft_strlen(v[1]) - 1;
        
            while(j > 0 && v[1][j] == ' ')
                j--;
            while (j > 0 && v[1][j] != ' ')
                j--;
            j++;
            b = j;
            while (v[1][j] && v[1][j] != ' ')
            {
                ft_putchar(v[1][j]);
                j++;
            }
            while (v[1][i] && v[1][i] == ' ')
                i++;
            while (v[1][i] && v[1][i] != ' ')
                i++;
            while (v[1][i] && i < b)
            {
                ft_putchar(v[1][i]);
                i++;
            }
            i = 0;
            while (v[1][i] && v[1][i] == ' ')
                i++;
            while (v[1][i] && v[1][i] != ' ')
                ft_putchar(v[1][i]), i++;
        
}