
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
        int i = 0, len = strlen(v[1]) - 1, type = 0;

        while(v[1][i])
        {
            if (v[1][i] != v[1][len])
            {
                write(1, "Reversed number: ", 17);
                while(v[1][type])
                {
                    ft_putchar(v[1][type]);
                    type++;
                }
                write(1, " This number is NOT a palindrome.", 33);
                return 0;
            }
            i++;
            len--;
        }
                write(1, "Reversed number: ", 17);
                while(v[1][type])
                {
                    ft_putchar(v[1][type]);
                    type++;
                }
                write(1, " This number is a palindrome.", 29);
    }
}
