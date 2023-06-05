#include <stdio.h>

int main()
{
    int n, target, k;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &k);
    printf("Enter the value you want to insert: ");
    scanf("%d", &target);

    int j = n;
    while (j >= k)
    {
        a[j + 1] = a[j];
        j--;
    }

    a[k] = target;
    n++;

    printf("After insertion, your array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
