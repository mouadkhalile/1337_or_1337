#include <unistd.h>
#include <stdlib.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     ft_strlen(char *str, int i)
{
    int len = 0;
    while(str[i] && str[i] != ' ')
        i++, len++;
    return len;
}
int     ft_str_len(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int     count_words(char *str)
{
    int i = 0;
    int word = 0;
    while(str[i])
    {
        if (str[i] != ' ')
        {
            word++;
            while(str[i] && str[i] != ' ')
                i++;
        }
        else
            i++;
    }
    
    return word;
}
int     ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i])
    {
        char c1 = s1[i];
        char c2 = s2[i];

        if (c1 >= 'a' && c1 <= 'z') c1 -= 32;
        if (c2 >= 'a' && c2 <= 'z') c2 -= 32;

        if (c1 != c2)
            return c1 - c2;
        i++;
    }
    return 0;
}
void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        ft_putchar(str[i++]);
}
char    **ft_split(char *str)
{
    int words = count_words(str);
    char **bock = malloc(sizeof(char *) * (words + 1));
    if (!bock)
        return NULL;

    int i, w;
    i = 0, w = 0;
    while(str[i])
    {
        if (str[i] != ' ')
        {
            int len = ft_strlen(str, i);
            bock[w] = malloc(sizeof(char) * (len + 1));
            int c = 0;
            while(str[i] && str[i] != ' ')
                bock[w][c++] = str[i++];

            bock[w][c] = '\0';
            w++;
        }
        else
            i++;
    }
    bock[w] = NULL;
    return bock;
}
void    strs_sort(char **strs)
{
    int w = 0;
    while (strs[w + 1])
    {
        int v = w + 1;
        while (strs[v])
        {
            if (ft_str_len(strs[w]) > ft_str_len(strs[v]) ||
            (ft_str_len(strs[w]) == ft_str_len(strs[v]) && ft_strcmp(strs[w], strs[v]) > 0))
            {
                char *tmp = strs[w];
                strs[w] = strs[v];
                strs[v] = tmp;
            }
            v++;
        }
        w++;
    }
}
int     main(int ac, char **v)
{
    if (ac != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    char **strs;
    strs = ft_split(v[1]);

    strs_sort(strs);

    int w, line;
    w = 0, line = 0;
    while(strs[w])
    {
        if (w > 0 && ft_str_len(strs[w]) != ft_str_len(strs[w-1]))
            ft_putchar('\n');
        else if (w > 0)
            ft_putchar(' ');

        ft_putstr(strs[w]);
        w++;
    }
}