#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ther_non_num(char *str)
{
    int i = 0;
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
        i++;
    if (str[i] != '\0')
        return 0;
    else
        return 1;
}
int is_sort(char *str)
{
    int i, j;
    i = 0;
    while(str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (str[i] > str[j])
                return 0;
        j++;
        }
    i++;
    }
    return 1;
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;
  
    if (ther_non_num(v[1]) == 0 || ther_non_num(v[2]) == 0)
        write(1, "string include same none digite", 31);
        return 0;
    int i, j;
    i = 0, j = 0;
    if (is_sort(v[1]) == 1 && is_sort(v[2]) == 1)
    {
        while(v[1][i])
        {
            while(v[2][j] && (v[2][j] <= v[1][i]))
            {
                ft_putchar(v[2][j]);
                j++;
            }
            ft_putchar(v[1][i]);
        i++;
        }
        while (v[2][j])
            ft_putchar(v[2][j]), j++;

    }
    else
        write(1, "not sort arg", 12);   
}