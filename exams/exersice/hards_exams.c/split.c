#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int str_len(char *str, int i)
{
    int len = 0;
    while(str[i] && str[i] != ' ')
        len++, i++;
    return len;
}
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
int     count_words(char *str)
{
    int i, word;
    i = 0, word = 0;
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
char    **ft_split(char *str)
{
    int i, w, c, nw;
    nw = count_words(str);
    char **words;
    words = malloc((nw + 1) * sizeof(char *));
    i = 0, w = 0;
    while(str[i])
    {
        if (str[i] != ' ')
        {
            int len = str_len(str, i);
            words[w] = malloc((len + 1) * sizeof(char));

            c = 0;
            while(str[i] && str[i] != ' ')
            {
                words[w][c] = str[i];
                i++, c++;
            }
            words[w][c] = '\0';
            w++;
        }
        else
            i++;
    }
    words[w] = NULL;
    return words;
}
int     main()
{
    char *str = "mouad is good man";
    char **words;
    words = ft_split(str);
    int i = 0;
    while(words[i] != NULL)
    {
        ft_putstr(words[i]);
        ft_putchar(' ');
        i++;
    }
}