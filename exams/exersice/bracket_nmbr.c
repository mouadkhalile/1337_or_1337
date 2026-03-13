#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **v)
{
    if (ac == 2)
    {
        int i = 0;

        while (v[1][i])
        {
            if (v[1][i] >= '0' && v[1][i] <= '9') // start of digits
            {
                ft_putchar('{');
                while (v[1][i] && v[1][i] >= '0' && v[1][i] <= '9') // print all consecutive digits
                {
                    ft_putchar(v[1][i]);
                    i++;
                }
                ft_putchar('}'); // close after digits
            }
            else
            {
                ft_putchar(v[1][i]);
                i++;
            }
        }
    }
    return 0;
}
