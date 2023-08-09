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

void push(node *&head, int val)
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

void display(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ==> ";
        tmp = tmp->next;
    }
    cout << " NULL " << endl;
}

int main()
{
    node *head = NULL;
    display(head);
    push(head, 1);
    display(head);
    push(head, 2);
    display(head);
    push(head, 3);
    display(head);
    return 0;
}
