#include <unistd.h>
#include <stdlib.h>
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
int return_atoi(char *str)
{
    int i = 0;
    int x = 0;
    while(str[i])
    {
        x = x * 10 + (str[i] - '0');
        i++;
    }
    return x;
}
int	*ft_range(int min, int max)
{
    if (min >= max)
        return NULL;
    int bet = max - min;
    int *avrg;
    avrg = malloc(bet * sizeof(int));
    if (avrg == NULL)
        return NULL;
    int i = 0;
    while(i < bet)
    {
        avrg[i] = min + i;
        i++;
    }
    return avrg;
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;
    int min = return_atoi(v[1]);
    int max = return_atoi(v[2]);

    int bet = max - min; 

    int *between;
    between = ft_range(min, max);
    if (between == NULL)
        return 0;

    int i = 0;
    while(i < bet)
    {
        ft_putnmbr(between[i]);
        write(1, "\n", 1);
        i++;
    }
}