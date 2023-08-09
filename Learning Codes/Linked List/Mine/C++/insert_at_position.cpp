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
void insert_at_position(node *&head, int val, int position)
{
    if (position == 0 || head == NULL)
    {
        node *n = new node(val);
        n->next = head;
        head = n;
        return;
    }

    node *n = new node(val);
    node *tmp = head;
    int i = 0;

    while (i < position - 1 && tmp->next != NULL)
    {
        tmp = tmp->next;
        i++;
    }

    n->next = tmp->next;
    tmp->next = n;
}

Sure, I 'll help you implement the insert_at_position function into the provided code and then show the output. Here' s the modified code with the insert_at_position function :

    cpp
        Copy code
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

void insert_at_position(node *&head, int val, int position)
{
    if (position == 0 || head == NULL)
    {
        node *n = new node(val);
        n->next = head;
        head = n;
        return;
    }

    node *n = new node(val);
    node *tmp = head;
    int i = 0;

    while (i < position - 1 && tmp->next != NULL)
    {
        tmp = tmp->next;
        i++;
    }

    n->next = tmp->next;
    tmp->next = n;
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

    insert_at_position(head, 500, 2);
    display(head);

    insert_at_position(head, 200, 1);
    display(head);

    return 0;
}