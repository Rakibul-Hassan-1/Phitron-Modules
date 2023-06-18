#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

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
void reverse_node(Node *tail)
{
    Node *temp = tail;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}
void insert__at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    // cout << temp->value << " ";
    newNode->next = temp->next;    // 100 -> 30
    temp->next = newNode;          // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = temp;          // 20<-100
}

int size(Node *head)
{
    Node *temp = head;

    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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

    // if first node is NULL then
    //  Node *head = NULL;
    //  Node *tail = NULL;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(30);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos, val;
    cin >> pos >> val;

    // cin >> val;
    // insert_tail(head, tail, val);

    if (pos > size(head))
    {
        cout << "Invalid!";
    }
    // inserting tail position of linked list
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    // inserting head position of linked list
    else if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    // inseting any position of liked list
    else
    {
        insert__at_position(head, pos, val);
    }
    cout << "Orginal: ";
    print_node(head);
    cout << "Reverse: ";
    reverse_node(tail);
    return 0;
}