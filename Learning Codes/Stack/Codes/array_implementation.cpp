#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int arr[10000];
    int Top;

    Stack()
    {
        Top = -1;
    }

    bool is_empty()
    {
        if (Top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int x)
    {
        Top++;

        arr[Top] = x;

        return;
    }

    void pop()
    {
        if (is_empty())
        {
            cout << "The stack is Empty now.!." << endl;
            return;
        }

        Top--;

        return;
    }
    int top()
    {
        if (is_empty())
        {
            cout << "The Stack is Currently Empty.!." << endl;
            return -1;
        }
        else
        {
            return arr[Top];
        }
    }
};

int main()
{

    Stack s;

    while (1)
    {
        int action;
        cout << "1 for Push() and 2 for Pop() and 3 for Top()" << endl;
        cin >> action;
        if (action == 1)
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (action == 2)
        {
            s.pop();
        }
        else
        {
            cout << s.top() << endl;
        }
    }
    return 0;
}