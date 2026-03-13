#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    if (size == 0)
        return malloc(1) containing '\0';

    int w = 0, i = 0, t = 0, s = 0;
    while(sep[s])
        s++;
    while(w < size)
    {
        i = 0;
        while(strs[w][i])
            i++, t++;
        if (w < size - 1)
            t += s;
    w++;
    }

    char *tox = malloc(sizeof(char) * (t + 1));

    if (tox == NULL)
        return NULL;

    w = 0, t = 0;
    while(w < size)
    {
        i = 0;
        while(strs[w][i])
        {
            tox[t] = strs[w][i];
            i++, t++;
        }
        if (w < size - 1)
        {
            s = 0;
            while(sep[s])
            {
                tox[t] = sep[s];
                s++, t++;
            }
        }
    w++;
    }
    tox[t] = '\0';

    return tox;
}
int     main()
{
    int size = 4;
    char *strs[] = {"mouad", "is", "good", "man"};
    char *sep = " | ";

    char *rox;
    rox = ft_strjoin(size, strs, sep);

    if (rox == NULL)
            return 0;

    int i = 0;
    while(rox[i])
        ft_putchar(rox[i++]);
    free(rox);
}