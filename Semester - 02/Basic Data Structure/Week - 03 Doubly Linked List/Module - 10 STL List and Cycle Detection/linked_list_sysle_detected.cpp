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

int main()
{
    // cycle detector by using Here and Tortoris algorithom, fast and slow
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = b; // if valu is NULL then no cycle created

    Node *fast = head;
    Node *slow = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        cout << "Cycle Detected!" << endl;
    else
        cout << "No Cycle Detected!" << endl;

    return 0;
}