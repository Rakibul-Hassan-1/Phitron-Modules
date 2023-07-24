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
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
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
void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = nullptr;
    // print_reverse(head);
    reverse(head, head);
    print_node(head);
    
    return 0;
}