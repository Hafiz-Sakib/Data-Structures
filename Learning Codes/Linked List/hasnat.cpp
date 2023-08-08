#include <iostream>

using namespace std;
bool creation = 0;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void Display(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insert_bg(Node *head, int ele)
{
    if (head == NULL)
        return new Node(ele);
    Node *t = new Node(ele);
    t->next = head;
    return t;
}

void insert_end(Node *&head, int ele)
{
    Node *t = head;
    while (t->next)
        t = t->next;
    t->next = new Node(ele);
}

Node *delete_bg(Node *head)
{
    if (!head)
        return NULL;
    return head->next;
}
void delete_end(Node *&head)
{
    Node *t = head, *prev = NULL;
    while (t->next)
    {
        prev = t;
        t = t->next;
    }
    if (!prev)
        t = NULL;
    else
        prev->next = NULL;
}

int search(Node *head, int ele)
{
    while (head)
    {
        if (head->data == ele)
            return 1;
        head = head->next;
    }
    return 0;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "1. Creat Linked List" << endl;
        cout << "2. Insert begining" << endl;
        cout << "3. Insert end" << endl;
        cout << "4. Delete begining" << endl;
        cout << "5. Delete end" << endl;
        cout << "6. Search an element" << endl;
        cout << "7. display Linked List" << endl;
        cout << "8. Exit" << endl;
        int x, ele, y;
        cin >> x;
        switch (x)
        {
        case 1:
            creation = 1;
            cout << "Linked List Created.."
                 << "\n\n";
            break;
        case 2:
            if (!creation)
            {
                cout << "Linked List is not created..."
                     << "\n\n";
                continue;
            }
            cout << "Enter a Value : ";
            cin >> ele;
            head = insert_bg(head, ele);
            break;
        case 3:
            if (!creation)
            {
                cout << "Linked List is not created..."
                     << "\n\n";
                continue;
            }
            cout << "Enter a Value : ";
            cin >> ele;
            insert_end(head, ele);
            break;
        case 4:
            if (!creation)
            {
                cout << "Linked List is not created..."
                     << "\n\n";
                continue;
            }
            head = delete_bg(head);
            break;
        case 5:
            if (!creation)
            {
                cout << "Linked List is not created..."
                     << "\n\n";
                continue;
            }
            delete_end(head);
            break;
        case 6:
            if (!creation)
            {
                cout << "Linked List is not created..."
                     << "\n\n";
                continue;
            }
            cout << "Enter a Element : ";
            cin >> ele;
            y = search(head, ele);
            if (y == 1)
                cout << "Element Present"
                     << "\n\n";
            else if (y == 0)
                cout << "Element Not Present"
                     << "\n\n";
            break;
        case 7:
            if (!creation)
            {
                cout << "Linked List is not created..."
                     << "\n\n";
                continue;
            }
            Display(head);
            break;
        case 8:
            exit(0);
            break;
        }
    }
    return 0;
}