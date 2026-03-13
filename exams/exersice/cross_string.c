#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac == 3)
    {
        int i, j;
        
        i = 0;
        while(v[1][i])
        {
                ft_putchar(v[1][i]);
                if (v[1][i] == v[2][0])
                {
                    j = 1;
                    while(v[2][j])
                    {
                        ft_putchar(v[2][j]);
                        j++;   
                    }
                }
                write(1, "\n", 1);
            i++;
        }

    }
    write(1, "\n", 1);
}