#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putword(char *str, int pt)
{
    while (str[pt] && str[pt] != ' ')
    {
        ft_putchar(str[pt]);
        pt++;
    }
}

int main(int ac, char **v)
{
    if (ac != 2)
        return (0);

    int i, mx, f, j;
    int sorts[100], pt_arr[100];   
    i = 0;
    j = 0;

    while (v[1][i])
    {
        if (v[1][i] != ' ')
        {
            f = i;
            mx = ' ';

            while (v[1][i] && v[1][i] != ' ')
                i++;

            if (v[1][f] > mx)
            {
                mx = v[1][f];
                sorts[j] = mx;
                pt_arr[j] = f;
                j++;
            }
        }
        else
            i++;
    }

    int t = 0;
    int k;
    int swap;

    while (t < j - 1)
    {
        k = 0;
        while (k < j - t - 1)
        {
            if (sorts[k] > sorts[k + 1])
            {
                swap = sorts[k];
                sorts[k] = sorts[k + 1];
                sorts[k + 1] = swap;

                swap = pt_arr[k];
                pt_arr[k] = pt_arr[k + 1];
                pt_arr[k + 1] = swap;
            }
            k++;
        }
        t++;
    }

    int n = 0;
    while (n < j)
    {
        ft_putword(v[1], pt_arr[n]);
        ft_putchar(' ');
        n++;
    }

    return (0);
}
