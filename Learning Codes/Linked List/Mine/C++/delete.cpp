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

void delete_at_position(node *&head, int position)
{
    if (head == NULL)
    {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    node *tmp = head;
    if (position == 1)
    {
        head = head->next;
        delete tmp;
        return;
    }

    int i = 1;
    while (i < position - 1 && tmp != NULL)
    {
        tmp = tmp->next;
        i++;
    }

    if (tmp == NULL || tmp->next == NULL)
    {
        cout << "Position out of range. Cannot delete." << endl;
        return;
    }

    node *toDelete = tmp->next;
    tmp->next = toDelete->next;

    if (tmp->next == NULL)
    {
        delete toDelete;
        return;
    }
    delete toDelete;
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

    delete_at_position(head, 4);
    display(head);

    return 0;
}
