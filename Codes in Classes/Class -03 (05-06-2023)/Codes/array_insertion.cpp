#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target, k;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter The Index Where You Want To Insert The Element" << endl;
    cin >> k;
    cout << "Enter The Value You Want To Insert" << endl;
    cin >> target;

    int j = n;
    while (j >= k)
    {
        a[j + 1] = a[j];
        j--;
    }

    a[k] = target;
    n++;

    cout << "After Insertion Your Array Is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}
