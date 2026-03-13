#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i, s;
        i = 0;
        s = 0;
        while(v[1][i])
        {
                if ((v[1][i] >= 'a' && 'z' >= v[1][i]) || (v[1][i] >= 'A' && 'Z' >= v[1][i]))
                {
                        if(v[1][i] >= 'a' && 'z' >= v[1][i])
                        {
                            ft_putchar(v[1][i] - 32);
                        }
                        else
                        {
                            ft_putchar(v[1][i] +32);
                        }
                }
                else
                {
                    ft_putchar(v[1][i]);
                }   
            i++;    
        }

    }
    write(1, "\n", 1);
}