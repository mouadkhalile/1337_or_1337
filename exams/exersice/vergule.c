// #include <unistd.h>
// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }
// int     main(int ac, char **v)
// {
//     if (ac == 2)
//     {
//         int i, j, point;
//         i = 0;
//         point = 0;
//         while(v[1][i])
//         {
//             ft_putchar(v[1][i]);
//             if (v[1][i] != ' ')
//             {
//                 j = i + 1;
//                 if (v[1][j] == ' ')
//                 {
//                     point = 1;
//                     while(v[1][j])
//                     {
//                         if (v[1][j] != ' ')
//                             point = 0;
//                     j++;
//                     }
//                     if (point == 1)
//                         ft_putchar('.');
//                     else
//                     {
//                         ft_putchar(',');
//                     }
//                 }
//                 else if (v[1][i+1] == '\0')
//                 {   
//                     ft_putchar('.');
//                 } 
//             }
//         i++;
//         }
//     }
// }
#include <unistd.h>
void ft_putchar(char c) { write(1, &c, 1); }

int main(int ac, char **v)
{
    if (ac == 2)
    {
        int i = 0, word_end;
        while(v[1][i])
        {
            ft_putchar(v[1][i]);
            if (v[1][i] != ' ' && (v[1][i+1] == ' ' || v[1][i+1] == '\0'))
            {
          
                int j = i + 1;
                while(v[1][j] && v[1][j] == ' ') j++;
                if (v[1][j])
                    ft_putchar(',');
                else
                    ft_putchar('.');
            }
            i++;
        }
    }
}
