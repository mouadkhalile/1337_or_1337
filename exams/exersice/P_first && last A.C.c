#include <unistd.h>
void   ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char **v)
{
if (argc > 1)
{
    int c = 1;
    int i = 0;
    while (c <= argc)   
    {
        i = 0;
        while(v[c][i])
        {
            while (v[c][i] == ' ' || v[c][i] == '\t')
                    i++;
            if (v[c][i+1] == ' ' || v[c][i+1] == '\t' || v[c][i+1] == '\0'
              || v[c][i-1] == ' ' || v[c][i-1] == '\t' || v[c][i] == v[c][0])
                {
                ft_putchar(v[c][i]);
                ft_putchar(' ');
                }
            i++;
        }
        write(1, "\n", 1);
        c++;
    }
}
write(1, "\n", 1);
}