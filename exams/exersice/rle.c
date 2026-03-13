#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnmbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnmbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
int		main(int ac, char **v)
{
	if (ac == 2)
	{
		int i, j, count;

		i = 0;
		while(v[1][i])
		{

			j = i + 1;
			count = 1;
			while(v[1][i] == v[1][j] && v[1][j])
			{
				count++;
			j++;
			}
			if (count > 1)
				ft_putnmbr(count);
			ft_putchar(v[1][i]);

			i = j - 1;
			
		i++;
		}
	}
	write(1, "\n", 1);
}
