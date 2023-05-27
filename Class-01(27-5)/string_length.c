#include <stdio.h>

int main()
{
    char s[1000];
    gets(s);
    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    printf("%d", size);
    return 0;
}