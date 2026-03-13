#include <unistd.h>
void    ft_putchar(char c)
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
    {
        i++; 
    }
    return i;         
}
int     main(int ac, char **v)
{
    if (ac == 3)
    {
        int i, j, count;

        i = 0;
        j = 0;
        count = 0;
                while(v[1][i])
                {
                                while(v[2][j])
                                {
                                            if (v[1][i] == v[2][j])
                                            {
                                                count++;
                                                break;
                                            }
                                                                            
                                j++;          
                                }
                i++;
                }
        if (count == ft_strlen(v[1]))
                    ft_putstr(v[1]);
    }
    write(1, "\n", 1);
}
