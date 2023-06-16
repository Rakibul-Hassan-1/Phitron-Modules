#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void print_node(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int node_size(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void inset_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_reverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    print_reverse(head->next);
    cout << head->value << " ";
}

void print_inverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->value << " ";
    print_inverse(head->next);
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
        inset_tail(head, tail, val);
    }

    print_reverse(head);
    cout << endl;
    print_inverse(head);

    return 0;
}