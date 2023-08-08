#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    bool is_empty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push_front(int x)
    {
        Node *NewNode = (Node *)malloc(sizeof(struct Node));

        NewNode->data = x;
        NewNode->next = NULL;

        if (is_empty())
        {
            head = NewNode;
            tail = NewNode;
        }
        else
        {
            NewNode->next = head;
            head = NewNode;
        }

        size++;

        return;
    }

    void push_back(int x)
    {
        Node *NewNode = (Node *)malloc(sizeof(struct Node));

        NewNode->data = x;
        NewNode->next = NULL;

        if (is_empty())
        {
            head = NewNode;
            tail = NewNode;
        }
        else
        {
            tail->next = NewNode;
            tail = NewNode;
        }

        size++;

        return;
    }

    void push_at_certain_position(int x, int position)
    {

        if (position == 1)
        {
            push_front(x);
            return;
        }
        else if (position == size + 1)
        {
            push_back(x);
            return;
        }
        else if (position > size)
        {
            cout << "Error" << endl;
            return;
        }
        size++;

        Node *NewNode = (Node *)malloc(sizeof(struct Node));

        NewNode->data = x;
        NewNode->next = NULL;

        if (position == 2)
        {
            NewNode->next = head->next;
            head->next = NewNode;
            return;
        }

        Node *temp;

        temp = head;

        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }

        NewNode->next = temp->next;
        temp->next = NewNode;

        return;
    }

    void pop_front()
    {
        if (is_empty())
        {
            cout << "Error" << endl;
            return;
        }

        head = head->next;

        size--;

        return;
    }

    void pop_back()
    {
        Node *temp;

        temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        size--;

        tail = temp;

        return;
    }

    void pop_from_certain_position(int position)
    {

        if (position == 1)
        {
            pop_front();
            return;
        }
        else if (position == size)
        {
            pop_back();
            return;
        }
        else if (position > size)
        {
            cout << "Error" << endl;
            return;
        }
        size--;

        if (position == 2)
        {
            head->next = head->next->next;
            return;
        }

        Node *temp;

        temp = head;

        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return;
    }

    int Size()
    {
        return size;
    }

    void PrintList()
    {
        if (is_empty())
        {
            cout << "Empty" << endl;
            return;
        }

        Node *temp;

        temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;

        return;
    }
};

int main()
{

    LinkedList L;

    while (true)
    {
        cout << "1 for Push Front" << endl;
        cout << "2 for Push Back" << endl;
        cout << "3 for Push at a Certain Position" << endl;

        cout << "4 for Pop Front" << endl;
        cout << "5 for Pop Back" << endl;
        cout << "6 for Pop from a Certain Position" << endl;

        cout << "7 to know Current Size" << endl;

        cout << "8 for Print the Linked List" << endl;

        int action;
        cin >> action;

        if (action == 1)
        {
            int x;
            cin >> x;
            L.push_front(x);
        }
        if (action == 2)
        {
            int x;
            cin >> x;
            L.push_back(x);
        }
        if (action == 3)
        {
            int x, p;
            cin >> x >> p;
            L.push_at_certain_position(x, p);
        }

        if (action == 4)
        {
            int x;
            L.pop_front();
        }
        if (action == 5)
        {
            int x;
            L.pop_back();
        }
        if (action == 6)
        {
            int p;
            cin >> p;
            L.pop_from_certain_position(p);
        }

        if (action == 7)
        {
            cout << L.Size() << endl;
        }

        if (action == 8)
        {
            L.PrintList();
        }
    }

    return 0;
}