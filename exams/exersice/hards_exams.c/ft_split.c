#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int str_len(char *str, int i, char *charset)
{
    int len = 0;
    while(str[i])
    {
        int s = 0;
        while(charset[s])
        {
            if (str[i] == charset[s])
                return len;
            s++;
        }
        len++;
        i++;
    }
    return len;
}
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        ft_putchar(str[i]), i++;
}
int is_sep(char *charset, char c)
{
    int i = 0;
    while(charset[i])
    {
        if (charset[i] == c)
            return 1;
       i++;
    }
    return 0;
}
int count_words(char *str, char *charset)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        while (str[i] && is_sep(charset, str[i]))
            i++;
        if (str[i] && !is_sep(charset, str[i]))
        {
            count++;
            while (str[i] && !is_sep(charset, str[i]))
                i++;
        }
    }
    return count;
}
char **ft_split(char *str, char *charset)
{
    int w = 0, i = 0, len = 0, j = 0, l = 0, t = 0;

    w = count_words(str, charset);
    char **strs = malloc(sizeof(char *) * (w + 1));

    w = 0;
    while(str[i])
    {
           if (!is_sep(charset, str[i]))
            {
                len = str_len(str, i, charset);
                strs[w] = malloc(sizeof(char) * (len + 1));
                j = i, t = 0;
                l = i + len;
                while(j < l)
                {
                    strs[w][t] = str[j];
                    t++;
                    j++;
                }
                strs[w][t] = '\0';
                i += len;
                w++;
            }
            else
                i++;
    }
    strs[w] = NULL;
    return strs;
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;
    char **str_spleted = ft_split(v[1], v[2]);
    int w = 0;
    while(str_spleted[w] != NULL)
    {
        ft_putstr(str_spleted[w]);
        write(1, "\n", 1);
        w++;
    }
    free(str_spleted);
}