#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pattern Match Algorithmwise Implementation

    string T, P;
    // cin >> T >> P;
    getline(cin, T);
    getline(cin, P);
    int S, R, MAX, INDEX = -1, K, L;
    S = T.size();
    R = P.size();
    K = 1;
    MAX = S - R + 1;
    while (K <= MAX)
    {
        for (L = 1; L <= R; L++)
        {
            if (P[L] != T[K + L - 1])
            {
                K++;
                break;
            }
        }

        if (L > R)
        {
            INDEX = K;
            break;
        }
    }

    cout << INDEX << endl;

    return 0;
}
