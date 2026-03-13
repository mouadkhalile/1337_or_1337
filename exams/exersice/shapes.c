#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
char *cheak_type(char *str, char *box)
{
int i, j, b, dif;

        i = 0;
        b = 0;
        // while(box[b])
        // b++;
        while (str[i])
        {
            j = 0;
            dif = 0;
            while (box[j])
            {
                if (box[j] == str[i])
                    dif = 1;
            j++;
            }
            if (dif == 0 && b < 255)
            {
                box[b] = str[i];
                ft_putchar(box[b]);
                b++;
                box[b] = '\0';
            }
        i++;
        }
        return box;
}
int     main(int ac, char **v)
{
    if (ac == 3)
    {
        char box[256];
        box[0] = '\0';
        cheak_type(v[1], box);
        char *boc = cheak_type(v[1], box);
        cheak_type(v[2], boc);  
    }
    write(1, "\n", 1);
}