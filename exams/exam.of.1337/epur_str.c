#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i;

        i = 0;
        while(v[1][i])
        {
                if (i == 0)
                {
                    while(v[1][i] == ' ')
                        i++;
                }
                if (v[1][i] != ' ')
                    ft_putchar(v[1][i]);
                else
                {
                    if (v[1][i] != v[1][i + 1] && v[1][i + 1] != '\0')
                        ft_putchar(' ');
                }
        i++;
        }
    }
    write(1, "\n", 1);
}