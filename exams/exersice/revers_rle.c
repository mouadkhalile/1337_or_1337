#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i = 0;
        while(v[1][i])
        {
            if (v[1][i] >= '0' && v[1][i] <= '9')
            {
                int x = v[1][i] - '0';
                while(x > 1)
                {
                    ft_putchar(v[1][i+1]);
                    x--;
                }
            }
            else{
                ft_putchar(v[1][i]);
            }
            i++;
        }

    }
}