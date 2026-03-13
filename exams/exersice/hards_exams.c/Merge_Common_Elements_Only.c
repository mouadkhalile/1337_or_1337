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
int checknmb(char *box, char c)
{
    int i = 0;
    while(box[i])
    {
        if (box[i] == c)
            return 1;
        i++;
    }
    return 0;
}
char *sort_strnmb(char *str)
{
    int i = 0, j;
    char temp;
    while(str[i])
    {
        j = i + 1;
        while(str[j])
        {
            if (str[j] < str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            j++;
        }
        i++;
    }
    // return str; ther two whay to return sort string this wan or function return str pointer;
}
void type_strnmb(char *str)
{
    int i = 0;
    while(str[i])
        ft_putchar(str[i++]);
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;
  
    if (!ther_non_num(v[1]) || !ther_non_num(v[2]))
    {
        write(1, "string include same none digite", 31);
        return 0;
    }
    int i = 0, c = 0, j;
    char box[256];
    box[0] = '\0';
        while(v[1][i])
        {
            j = 0;
            while(v[2][j])
            {
                if (v[2][j] == v[1][i] && !checknmb(box, v[1][i]))
                {
                    box[c] = v[1][i], c++;
                    box[c] = '\0';
                    break;
                }
                j++;
            }
            i++;
        }
        sort_strnmb(box);
        type_strnmb(box);
}