#include <stdio.h>

int main()
{
    // Find Odd and Even Numbers From an Array
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("Even Number");
        }
        else
        {
            printf("Odd Number");
        }
    }

    return 0;
}