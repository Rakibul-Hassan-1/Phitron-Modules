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

int node_size(Node *head)
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
// inserting any point of the node
void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
// inserting head postion of the node
void insert_head(Node *&head, int val) // if we added value at the point head then we need to collect the referance value &
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void inset_tail(Node *&head, Node *&tail, int val) // যদি "head = newNode" লিখতে হয় তাহলে রেফারেন্স &  নিয়ে নিতে হবে।
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

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    // Node *e = new Node(60);
    Node *tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    // e->next = NULL;
    print_node(head);
    cout << "Tail value: " << tail->value << endl;
    int pos, val;
    cin >> pos >> val;

    if (pos > node_size(head))
    {
        cout << "Invalid index!";
    }
    else if (pos == 0)
    {
        insert_head(head, val);
        print_node(head);
    }
    else if (pos == node_size(head))
    {
        inset_tail(head, tail, val);
    }
    else
    {
        insert(head, pos, val);
    }
    print_node(head);
    cout << "Tail value: " << tail->value << endl;
    return 0;
}