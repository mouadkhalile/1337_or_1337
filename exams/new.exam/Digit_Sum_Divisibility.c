#include <unistd.h>
int     atoi(char *str)
{
    int i = 0, x = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            x = x * 10 + (str[i] - '0');
    i++;
    }
    return x;
}
int     sum_digits(int x)
{
    int res = 0;
    while(x > 0)
    {
        res += (x % 10); 
        x /= 10;
    }
    return res;
}
int     Div(int x, int d)
{
    x = sum_digits(x);
    if (x % d == 0)
        return 1;
    else
        return 0;
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;
    int x = atoi(v[1]);
    int d = atoi(v[2]);

    int res = Div(x, d);
    if (res) {write(1, "YES", 3);}
    else {write(1, "NO", 2);}
    return 0;
}