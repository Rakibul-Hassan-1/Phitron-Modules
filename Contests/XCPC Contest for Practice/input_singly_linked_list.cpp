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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_list(Node *head)
{
    Node *temp = head;
    cout << "Your list is: ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    cout << "Enter nodes: ";
    Node *head = NULL;
    while (1)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        insert_at_tail(head, n);
    }
    print_list(head);
    return 0;
}
