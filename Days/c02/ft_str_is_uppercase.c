#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
        int i ;

        i = 0;
        while(str[i])
        {
            if (!(str[i] >= 'A' && str[i] <= 'Z'))
                return 0;

            i++;
        }
        return 1;
}
int     main()
{
    char str[] = "DSDaS";
    printf(" %d \n", ft_str_is_uppercase(str));
}