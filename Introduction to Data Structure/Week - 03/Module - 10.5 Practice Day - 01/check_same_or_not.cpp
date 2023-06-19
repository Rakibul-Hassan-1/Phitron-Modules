#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next, *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail1(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insert_tail2(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_node(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head1 = nullptr;
    Node *tail1 = nullptr;

    Node *head2 = nullptr;
    Node *tail2 = nullptr;

    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;

        insert_tail1(head1, tail1, val1);
    }

    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;

        insert_tail2(head2, tail2, val2);
    }
    bool flag = false;

    for (Node *i = head1; i->next != NULL; i = i->next)
    {
        for (Node *j = head2; j->next != NULL; j = j->next)
        {
            if (i->value == j->value)
            {
                continue;
            }
            else
            {
                flag = true;
                break;
            }
        }
    }

    if (flag == true)
    {
        cout << "NO";
    }

    else
    {
        cout << "YES";
    }

    return 0;
}