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

void find_mid(Node *head)
{
    int size = node_size(head);
    Node *temp = head;
    int mid = (size + 1) / 2;
    for (int i = 0; i < mid - 1; i++)
    {
        temp = temp->next;
    }
    if (size % 2 == 0)
    {
        cout << temp->value << " " << temp->next->value << endl;
    }
    else
    {
        cout << temp->value;
    }
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
    // print_node(head);
    // find_mid(head);

    // sorting
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    print_node(head);

    return 0;
}