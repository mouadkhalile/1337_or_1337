#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **v)
{
    if (ac == 3)
    {
        int i = 0, count = 1;
        int x = v[2][0] - '0';
        int found = 0;

        while (v[1][i])
        {
            // Skip spaces
            while (v[1][i] == ' ')
                i++;

            if (count == x)
            {
                // print word
                while (v[1][i] && v[1][i] != ' ')
                {
                    ft_putchar(v[1][i]);
                    i++;
                }
                found = 1;
                break;
            }

            // Skip current word
            while (v[1][i] && v[1][i] != ' ')
                i++;

            count++;
        }

        if (!found)
            write(1, "Word not found", 14);
    }
    write(1, "\n", 1);
    return 0;
}