#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	returnumb(char *str)
{
	int i = 0;
	int x = 0;
	while (str[i])
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x);
}

int	strlen_custom(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **v)
{
	if (ac == 3)
	{
		int step = returnumb(v[1]);  
		int i = step - 1;     
		int len = strlen_custom(v[2]);

		while (i < len)
		{
			ft_putchar(v[2][i]);
			i += step;  
        }
	}
	write(1, "\n", 1);
}
