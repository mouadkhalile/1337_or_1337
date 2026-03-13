#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int count_char(char *str, char c)
{
    int i = 0, count = 0;
    while (str[i])
    {
        if (str[i] == c)
            count++;
        i++;
    }
    return count;
}
int char_in_str(char *ptr, char c)
{
    int i = 0;
    while(ptr[i])
    {
        if (ptr[i] == c)
            return 1;
        i++;
    }
    return 0;
}
int     smollwindow(char *str, char *patren, int i)
{
    int tall = 0, j = 0, b = 0;
    char box[strlen(patren)];
    box[b] = '\0';
    while(str[i] && patren[j])
    {
        if (char_in_str(patren, str[i]) && count_char(box, str[i]) < count_char(patren, str[i]))
        {
            j++;
            box[b] = str[i];
            b++, box[b] = '\0';
        }
        i++, tall++;
    }
    if (patren[j] == '\0')
        return tall;
    else
        return 1000;
}
int     main(int ac, char **v)
{
    if (ac != 3)
        return 0;
    if (strlen(v[1]) < strlen(v[2]))
    {
        write(1, "nothing", 7);
        return 0;
    }
    int i, min, tall, p;
    i = 0, min = 999, p = 0;
    while(v[1][i])
    {
        tall = smollwindow(v[1], v[2], i);
        if (tall < min)
        {
            min = tall;
            p = i;
        }
        i++;
    }
    int end = min + p;
    if (strlen(v[1]) < end)
    {
        write(1, "bug problm", 10);
        return 0;
    }
        while(p < end)
            ft_putchar(v[1][p++]);
    return 0;
}