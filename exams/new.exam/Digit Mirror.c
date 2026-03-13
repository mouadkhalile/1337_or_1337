#include <unistd.h>
#include <stdio.h>
int     reversed(int x)
{
    if (x < 0)
        write(1, "-", 1), x = -x;
    
    int b = 0;
    while(x > 0)
    {
        b = b * 10 + (x % 10);
        x /= 10;
    }
    return b;
}
int main() {
    int x = 123;
    int rev = reversed(x);
    
    printf("%d", rev);
    return 0;
}