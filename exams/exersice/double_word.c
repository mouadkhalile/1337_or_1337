#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i, j;
        i = 0;
        while(v[1][i])
        {
            ft_putchar(v[1][i]);
            if (v[1][i] != ' ')
            {
                    if (v[1][i+1] == ' ' || v[1][i+1] == '\0')
                    {
                        j = i;
                        while(j > 0 && v[1][j] != ' ')
                            j--;
                        if (j == 0)
                            ft_putchar(' ');
                        while (i >= j)
                        {
                            ft_putchar(v[1][j]);
                            j++;
                        }
                    }
            }    
            i++;
        }
    }
}
