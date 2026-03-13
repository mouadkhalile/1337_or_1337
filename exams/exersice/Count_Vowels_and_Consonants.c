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
int     main(int ac, char **v)
{
    if (ac == 2)
    {
        int i, vowels, consonants;
        
        i = 0, vowels = 0, consonants = 0;
        while (v[1][i])
        {
            if (v[1][i] >= 'a' && v[1][i] <= 'z' || v[1][i] >= 'A' && v[1][i] <= 'Z')
            {
                if (v[1][i] == 'a' || v[1][i] == 'e' || v[1][i] == 'i' || v[1][i] == 'o' || v[1][i] == 'u' ||
                    v[1][i] == 'A' || v[1][i] == 'E' || v[1][i] == 'I' || v[1][i] == 'O' || v[1][i] == 'U')
                        vowels++;
                else
                    consonants++;
            }
            i++;
        }
        write(1, "vowels : ", 9);
        ft_putnmbr(vowels);
        write(1, "\n", 1);
        write(1, "consonants : ", 13);
        ft_putnmbr(consonants);
    }
}