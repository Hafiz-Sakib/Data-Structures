#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the index of the element you want to delete: ");
    scanf("%d", &k);

    for (int i = k; i <= (n - 1); i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    printf("After deletion, your array is:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
