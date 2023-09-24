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
    tail->next = newNode;
    tail = newNode;
}

void deleteDuplicates(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {

        if (temp->value == temp->next->value)
        {
            temp->next = temp->next->next;
        }

        if (temp->next == NULL)
        {
            break;
        }

        else if (temp->value != temp->next->value)
        {
            temp = temp->next;
        }
    }
    print_node(head);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }

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
    
    deleteDuplicates(head);

    return 0;
}
