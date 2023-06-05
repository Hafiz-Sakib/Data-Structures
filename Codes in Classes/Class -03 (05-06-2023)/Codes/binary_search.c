#include <stdio.h>

int main()
{
    int n, ans = -1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to find in the array: ");
    int q;
    scanf("%d", &q);

    int first = 0;
    int last = n - 1;

    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (q == a[mid])
        {
            ans = mid;
            break;
        }
        else if (a[mid] < q)
        {
            first = mid + 1;
        }
        else if (a[mid] > q)
        {
            last = mid - 1;
        }
    }

    if (ans == -1)
    {
        printf("The number is not present in the array.\n");
    }
    else
    {
        printf("The number is found at position %d in the array.\n", ans + 1);
    }

    return 0;
}
