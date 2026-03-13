#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int strlen(char *str)
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
    if (ac == 2)
    {
        int i , count, j;

        i = 0;
        count = 0;
        while(v[1][i])
        {
            if (v[1][i] != ' ')
            {
                count++;
                while(v[1][i] && v[1][i] != ' ')
                    i++;
                i--;
            }
            i++;
        }
        write(1, "Words: ", 7);
        ft_putnbr(count);
        write(1, "\n", 1);
        write(1, "letters: ", 9);
        ft_putnbr(strlen(v[1]));
    } 
}