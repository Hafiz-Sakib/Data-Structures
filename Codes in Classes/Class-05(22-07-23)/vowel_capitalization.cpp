#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans = "";
    cin >> s;
    for (auto c : s)
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            ans += tolower(c);
        }
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            ans += toupper(c);
        }
        else
        {
            ans += c;
        }
    }

    cout << ans << endl;

    return 0;
}
