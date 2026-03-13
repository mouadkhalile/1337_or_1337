#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **v)
{
    if (ac == 3)
    {
        int i, j, sr, rep, stor;
        char book[256];
        stor = 0;
        sr = 1;
        book[0] = '\0';
        while(sr <= 2)
        {
                i = 0;       
                while(v[sr][i])
                {
                        j = 0;
                        rep = 0;

                            while(book[j])
                            {
                                        if (v[sr][i] == book[j])
                                        rep = 1;
                                j++;
                            }
                            if (rep == 0)
                            {
                                book[stor] = v[sr][i];
                                ft_putchar(book[stor]);
                                stor++;
                            }

                book[stor] = '\0';    
                i++;
                }
        sr++;
        }

    }
    write(1, "\n" ,1);
}