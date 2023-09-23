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
void insert_tail(Node *&head, int v)
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
void print_node(Node *head)
{
    Node *temp = head;
    cout << "You nodes are: ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "Press 1 to create node\n";
        cout << "Press 2 to print node\n";
        cout << "Press 3 Exit!\n";
        int n;
        cin >> n;
        if (n == 1)
        {
            int v;
            cin >> v;
            insert_tail(head, v);
        }
        else if (n == 2)
        {
            print_node(head);
        }
        else
        {
            break;
        }
    }

    return 0;
}