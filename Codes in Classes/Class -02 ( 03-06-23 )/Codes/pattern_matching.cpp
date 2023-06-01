#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pattern Match My Implementation

    string t, p;
    // cin >> t >> p;
    getline(cin, t);
    getline(cin, p);
    int ts, ps, lim, idx = -1, i, j;
    ts = t.size();
    ps = p.size();
    lim = ts - ps;
    for (i = 0; i <= lim; i++)
    {
        for (j = 0; j < ps; j++)
        {
            if (p[j] != t[i + j])
            {
                break;
            }
        }

        if (j == ps)
        {
            idx = i;
            break;
        }
    }

    cout << idx << endl;

    return 0;
}
