#include <unistd.h>
int     atoi(char *str)
{
    int i, x;
    i = 0, x = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            x = x * 10 + (str[i] - '0');
        i++;
    }
    return x;
}
int     validator(int x)
{
    if (x == 0) return 1;

    int last = 10;
    while(x > 0)
    {
        int first = x % 10;
        if (first >= last) return 0;

        last = first;
        x /= 10;
    }
    return 1;
}
int     main(int ac, char **v)
{
    if (ac != 2) return 0;

    int x = atoi(v[1]);
    x = validator(x);
    if (!x)
        write(1, "NO", 2);
    else
        write(1, "YES", 3);
}