#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int     ft_between(int x)
{
    if (x < 0)
        return -x;
    return x;
}
int     *ft_rrange(int start, int end)
{
    int size = ft_between(end - start) + 1;
    int *boox = malloc(sizeof(int) * size);
    if (!boox)
        return NULL;

    int i = 0;
    while (i < size)
    {
        boox[i] = end;
        if (end > start)
            end--;
        else
            end++;
        i++;
    }

    return boox;
}
int     main()
{
    int start = 0;
    int end = -3;
    int *rrange = ft_rrange(start, end);
    int total_elements = ft_between(end - start) + 1;
    
    int i = 0;
    while (i < total_elements)
    {
        printf("%d ", rrange[i]);
        i++;
    }

    free(rrange);
    return 0;
}