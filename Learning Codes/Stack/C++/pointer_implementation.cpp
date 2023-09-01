//  Stack Implementation With Pointer

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

class Stack
{
public:
    Node *Top;

    Stack()
    {
        Top = NULL;
    }

    bool is_empty()
    {
        if (Top == NULL)
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
        struct Node *NewNode = (Node *)malloc(sizeof(struct Node));

        NewNode->data = x;
        NewNode->next = Top;

        Top = NewNode;

        return;
    }

    void pop()
    {
        if (is_empty())
        {
            return;
        }

        Top = Top->next;

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
            return Top->data;
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