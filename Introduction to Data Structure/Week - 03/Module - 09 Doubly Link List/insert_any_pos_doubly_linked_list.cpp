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
int main()
{

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
    if (pos == 0)
    {
        cout << "Invalid!";
    }
    else if (pos == size(head))
    {
        cout << "Invalid!";
    }
    else
    {
        insert__at_position(head, pos, val);
        print_node(head);
        cout << endl;
        reverse_node(tail);
    }

    return 0;
}