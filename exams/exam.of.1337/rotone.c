#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int ac, char **v)
{
    if (ac == 2)
    {
        int i; 
        i = 0;
        while(v[1][i])
        {
                if (v[1][i] == 'Z')
                    ft_putchar('A');
                
                else if (v[1][i] == 'z')
                    ft_putchar('a');
                                    else if (v[1][i] >= 'A' && v[1][i] < 'Z')
                                    {
                                        ft_putchar(v[1][i] + 1);

                                    }
                                    else if (v[1][i] >= 'a' && v[1][i] < 'z')
                                    {
                                        ft_putchar(v[1][i] + 1);
                                    }
                else {
                    ft_putchar(v[1][i]);
                }
        i++;
        }
        
    }
    write(1, "\n", 1);
}