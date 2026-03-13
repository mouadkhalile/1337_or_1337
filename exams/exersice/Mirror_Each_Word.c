#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnmbr(int nb)
{
    char box[10];
    int i = 0;

    if (nb == 0)
    {
        ft_putchar('0');
        return;
    }
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    while (nb > 0)
    {
        box[i] = (nb % 10) + '0';
        nb = nb / 10;
        i++;
    }
    while (--i >= 0)
        ft_putchar(box[i]);
}
int  sum_of_digits(char *str)
{
    int i, x;
    
    i = 0, x = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            x += (str[i] - '0');
        i++;
    }
    return x;
}
int  longest_word_length(char *str)
{
    int i, tall, low;

    i = 0, tall = 0, low = 0;
    
    while(str[i])
    {
        tall = 0;
        while (str[i] && str[i] != ' ')
        {
            tall++;
        i++;
        }
        if (tall > low)
            low = tall;//6
        i++;
    }
    return low;
}
int  words_with_digits(char *str)
{
    int i, wd, point;

    i = 0, wd = 0;
    while(str[i])
    {
        point = 0;
        while(str[i] && str[i] != ' ')
        {           
            if (str[i] >= '0' && str[i] <= '9')
                point = 1;
        i++;    
        }
        if (point == 1)
            wd++;
        i++;
    }
    return wd;
}
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int s, l, w;

        s = sum_of_digits(v[1]), l = longest_word_length(v[1]), w = words_with_digits(v[1]);
        write(1, "Sum of digits: ", 15), ft_putnmbr(s), write(1, "\n", 1);
        write(1, "Longest word length: ", 21), ft_putnmbr(l), write(1, "\n", 1);
        write(1, "Words with digits: ", 19), ft_putnmbr(w);
    }
    return 0;
}