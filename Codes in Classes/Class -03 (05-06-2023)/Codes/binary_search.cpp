#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = -1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter The Number You Want to Find in The Array : " << endl;
    int q;
    cin >> q;

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
        cout << "The number is not present in the array." << endl;
    }
    else
    {
        cout << "The number is found at position " << ans + 1 << " in the array." << endl;
    }

    return 0;
}
