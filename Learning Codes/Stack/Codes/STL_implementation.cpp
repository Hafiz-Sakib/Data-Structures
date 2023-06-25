#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10); // 10
    s.push(20); // 10 20
    s.push(30); // 10 20 30
    s.pop();    // 10 20

    if (s.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    return 0;
}