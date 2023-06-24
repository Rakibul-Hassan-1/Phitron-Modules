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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->next = newNode;
    tail = newNode;
}

void insert_head(Node *&head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x, v;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, v);
        }
        else
        {
            insert_tail(head, tail, v);
        }

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        cout << head->value << " " << temp->value << endl;
    }

    return 0;
}