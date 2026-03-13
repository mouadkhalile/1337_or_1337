#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int valid_sub(char *str, int i)
{
    int x = i;
    int open, close, plv;

    open = 0;
    close = 0;
    plv = -1;

    while (str[i])
    {
        if (str[i] == '(')
            open++;
        else if (str[i] == ')')
            close++;

        if (open == close)
            plv = i;

        if (close > open)
            break;
        i++;
    }

    if (plv != -1)
        return plv - x + 1;
    else
        return 0;
}

int main(int ac, char **v)
{
    if (ac != 2)
        return 0;

    int i, longest_valid_sub, start, the_tall_sub;
    i = 0;
    the_tall_sub = 0;
    longest_valid_sub = 0;
    start = 0;

    while (v[1][i])
    {
        if (v[1][i] == '(')
            longest_valid_sub = valid_sub(v[1], i);

        if (the_tall_sub < longest_valid_sub)
        {
            the_tall_sub = longest_valid_sub;
            start = i;
        }
        i++;
    }

    if (the_tall_sub == 0)
        return 0;

    int end = start + the_tall_sub;

    printf("longest_sub : %d\n", the_tall_sub);

    while (start < end)
    {
        ft_putchar(v[1][start]);
        start++;
    }
    return 0;
}