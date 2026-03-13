#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    i++;
    return i;
}
/*int     main(int ac, char **v)       // "my logic"
{
    if (ac == 4)
    {
    int i, t, j, count;
        t = (ft_strlen(v[2]) + ft_strlen(v[3]));
        if (t != 2)
        {
            write(1, "\n", 1);
            return 0;
        }
 
                    i = 0;
                    count = 0;
                                    while(v[1][i])
                                    {
                                        if (v[1][i] == v[2][0])
                                        {
                                            count = 1;
                                        }
                                        i++;
                                    }
                                if (count == 0)
                                {
                                    ft_putstr(v[1]);
                                    write(1, "\n", 1);
                                    return 0;
                                }
                
                          
                                            i = 0, j = 0;
                                            while(v[1][i])
                                            {
                                                    if(v[1][i] == v[2][0])
                                                        ft_putchar(v[3][0]);
                                                    else{
                                                        ft_putchar(v[1][i]);
                                                    }
                                            i++;
                                            }

    }
    write(1, "\n", 1);
}*/

int     main(int ac, char **v)
{
        if (ac == 4 && ft_strlen(v[2]) == 1 && ft_strlen(v[3]) == 1)
        {
            int i = 0;
            while(v[1][i])
            {
                    if(v[1][i] == v[2][0])
                        ft_putchar(v[3][0]);
                    else
                        ft_putchar(v[1][i]);
                i++;
            }
        }
        write(1, "\n", 1);
}
