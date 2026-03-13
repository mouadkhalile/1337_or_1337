#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int str_len(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int cheak_is_on(char *str, char c)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}
int whare_is(char *str, char c)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] == c)
            return i;
        i++;
    }
    return -1;
}
int     isomorphic(char *str, char *compire)
{
    char alpha[256];
    alpha[0] = '\0';
    char ismor[256];
    ismor[0] = '\0';

    int i, x, p;
    i = 0, x = 0, p = 0;

    while(str[i])
    {
        if (!cheak_is_on(alpha, str[i]))
        {
            alpha[p] = str[i];            
            ismor[p] = compire[i];
            p++;
            alpha[p] = '\0';
            ismor[p] = '\0';
        }
        else
        {
            x = whare_is(alpha, str[i]);
            if (ismor[x] != compire[i])
                return 0;
        }
    i++;
    }
    return 1;
}
int     main(int ac, char **v)
{
    if (ac != 3 || str_len(v[1]) != str_len(v[2]))
        return 0;

    if (!isomorphic(v[1], v[2]))
    {
        write(1, "NO, THE (FIRST) STRING IS -{NOT}- ISMORPHIC WITH THE (SACEND) STRING", 68);
        return 0;
    }
    else if (!isomorphic(v[2], v[1]))
    {
        write(1, "NO, THE (SACEND) STRING IS -{NOT}- ISMORPHIC WITH THE (FIRST) STRING", 68);
        return 0;
    }
    else if (isomorphic(v[1], v[2]) && isomorphic(v[2], v[1]))
    {
        write(1, "YES ITS ISOMORPHIC", 18);
        return 0;
    }
}