#include <unistd.h>
#include <stdio.h>
int big_nmbr(int *ns, int max)
{

    int i, x;

    i = 0;
    x = -2147483648;
    while(i < max)
    {
        if (x < ns[i])
            x = ns[i];
        i++;

    }
    return x;
}
int little_nmbr(int *ns, int max)
{
    int i, x;

    i = 0;
    x = 2147483647;
    while(i < max)
    {
        if (x > ns[i])
            x = ns[i];
        i++;
    }
    return x;
}
int main()
{
    int array[] = {-2, -30, 31, 31, 7, 0};
    int max = 6;

    int b = big_nmbr(array, max);
    int m = little_nmbr(array, max);

    printf("%d\n", b);
    printf("%d", m);
}