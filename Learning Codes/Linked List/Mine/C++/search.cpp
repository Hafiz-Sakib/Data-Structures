#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_at_tail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
}

bool search(node *&head, int key)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == key)
        {
            return 1;
        }
        tmp = tmp->next;
    }
    return 0;
}

void display(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " --> ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 10);
    insert_at_tail(head, 100);
    insert_at_tail(head, 1000);
    display(head);
    int found = 0;
    found = search(head, 1100) ? 1 : 0;
    if (found)
    {
        cout << "Founded" << endl;
    }
    else
    {
        cout << "Not Founded" << endl;
    }
    return 0;
}
