#include <unistd.h>
#include <stdio.h>
int remove_chars(char *s, char *S)
{
    int i, j, b, same;
    char box[100];
    box[0] = '\0';

    i = 0, j = 0, b = 0, same = 0;
    while(s[i])
    {
        j = 0;
        same = 0;
        while(S[j])
        {
            if (s[i] == S[j])
                same = 1;
            j++;
        }
        if (!same)
        {
            box[b] = s[i];
            b++, box[b] = '\0';
        }
        i++;
    }
    i = 0;
    while(box[i])
    {
        s[i] = box[i];
        i++;
    }
    s[i] = '\0';
    return i;
}
int remove_same_chars(char *s, char *S)
{
    int i, j, b, same;
    i = 0, j = 0, same = 0;

    while(s[i])
    {
        b = 0;
        same = 0;
        while (S[b])
        {
            if (s[i] == S[b])
                same = 1;
            b++;
        }
        if (!same)
            {
                s[j] = s[i];
                j++;
            }
        i++;
    }
    s[j] = '\0';
    return j;
}
int main()
{
    char s[] = "helloooooooo world";
    char S[] = "lo";
    int tall = remove_same_chars(s, S);

    printf("%d", tall);
}
