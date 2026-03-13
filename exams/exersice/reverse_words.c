#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
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

int main(int ac, char **v)
{
    if (ac == 2)
    {
        int i = ft_strlen(v[1]) - 1;
        int start, end;

        while (i >= 0)
        {
            while (i >= 0 && (v[1][i] == ' ' || v[1][i] == '\t'))
                i--;

            end = i;

            while (i >= 0 && v[1][i] != ' ' && v[1][i] != '\t')
                i--;

            start = i + 1;

            while (start <= end)
            {
                ft_putchar(v[1][start]);
                start++;
            }

            if (i >= 0 )
            {
               int cheak = 0;
               int g = start - 1;
               while(g >= 0 && v[1][g] != ' ')
               {
                    cheak = 1;
                    g--;
               }
               int s = 0;
               int chaek2 = 0;
               while (s <= i )
               {
                    if (v[1][s] != ' ')
                    {
                        chaek2 = 1;
                    }
                    s++;
               }
               cheak += chaek2;
                    if (cheak == 2)
                    ft_putchar(' ');
            }
        }
    }
    write(1, "\n", 1);
}