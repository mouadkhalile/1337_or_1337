#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)   // MY LOGIC
{
    if (ac == 3)
    {
        int i , t, b, count, sheak_back, f;

        char boc[100];
        i= 0;
        b = 0;
        while(v[1][i])
        {
                count = 0;
                t = 0;
                f = 1;
                while(v[1][t])
                {
                    if (v[1][i] == v[1][t])
                            count++;
                 t++;
                }
                                    if(count == 1)
                                    { 
                                        boc[b] = v[1][i];
                                        b++;
                                    }
                                    else 
                                    {
                                                        sheak_back = i - 1;
                                                        while( 0 <= sheak_back )
                                                        {
                                                                if (v[1][i] == v[1][sheak_back])
                                                                    f = 0;
                                                        sheak_back--;
                                                        }
                                    if (f == 1)
                                    {
                                        boc[b] = v[1][i];
                                        b++;
                                    }
                                    }
            i++;
        }
        boc[b] = '\0';
                                    i = 0;
                                    while(boc[i])
                                    {
                                                count = 0;
                                                t = 0;
                                                while(v[2][t])
                                                {
                                                    if (boc[i] == v[2][t])
                                                    {
                                                        count = 1;
                                                        break;
                                                    }
                                                    t++;
                                                }
                                                if (count == 1)
                                                ft_putchar(boc[i]);
                                        i++;
                                    }
    }
    write(1, "\n", 1);
}