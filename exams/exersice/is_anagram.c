#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int is_same_lettr(char *str1, char *str2)
{

    int i, j, same;

    i = 0;
    while(str1[i])
    {
            same = 0;
            j = 0;
            while(str2[j])
            {
                if (str1[i] == str2[j])
                    same = 1;
                j++;
            }
            if (same == 0)
              return 0;
        i++;
    }
    i = 0;
    while(str2[i])
    {
            same = 0;
            j = 0;
            while(str1[j])
            {
                if (str2[i] == str1[j])
                    same = 1;
                j++;
            }
            if (same == 0)
              return 0;
        i++;
    }
    return 1;
    
}
int     main(int ac, char **v)
{
    if (ac == 3)
    {
        int res;
           
        res = is_same_lettr(v[1], v[2]);

        ft_putchar(res + '0');

    }
    write(1, "\n", 1);
}