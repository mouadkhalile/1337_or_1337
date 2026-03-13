#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnmb(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnmb(nb / 10);
    }
    char c = (nb % 10) + 48;
    ft_putchar(c);
}
void ft_repead_litter(char *str, char c)
{
    int i, count;
    count = 0, i = 0;
    while(str[i])
    {
        if (str[i] == c)
            count++;
        i++;
    }
    ft_putnmb(count);
}
int ft_no_repead_litter(int i, char s, char *box)
{
        int b = 0;
        while(box[b])
        {
                if (s == box[b])
                    return 1;
        box++;
        }
    return 0;
}
int     main(int ac, char **v)
{
    char box[26];
    int i, j, b;
    i = 0, b = 0, box[0] = '\0';
    while(v[1][i])
    {
        if (!ft_no_repead_litter(i, v[1][i], box))
        {
            j = 0;
            write(1, " | ", 3);
                if (v[1][i] >= 'a' && v[1][i] <= 'z' || v[1][i] >= 'A' && v[1][i] <= 'Z')
                {
                    ft_putchar(v[1][i]);
                    write(1, " => ", 4);
                    ft_repead_litter(v[1], v[1][i]);
                }
                else
                    ft_putchar('!');
            box[b] = v[1][i];
            b++;
            box[b] = '\0';
        }
    i++;
    }
}