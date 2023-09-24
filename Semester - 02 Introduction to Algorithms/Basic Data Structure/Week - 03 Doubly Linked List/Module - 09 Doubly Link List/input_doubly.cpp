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

void print_noraml(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << " \n";
}
void insert_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print_noraml(head);
    print_reverse(tail);

    return 0;
}