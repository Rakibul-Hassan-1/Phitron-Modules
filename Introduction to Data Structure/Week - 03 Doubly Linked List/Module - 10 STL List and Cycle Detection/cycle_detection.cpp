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
bool isCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = head; // If any node is connected then cycle is deteccted otherwise not detected!

    if (isCycle(head)) // true
        cout << "Cycle Detected!";

    else
        cout << "Not detected!";

    return 0;
}