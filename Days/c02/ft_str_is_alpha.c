#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_str_is_alpha(char *str)
{
    int i ;

    i = 0;

        while(str[i])
        {
            if (!((str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= 'a' && str[i] <= 'z')))
                return 0;

            i++;
        }
        return 1;
}
int     main()
{
        char word[] = "";

        printf(" %d \n", ft_str_is_alpha(word));
        
}