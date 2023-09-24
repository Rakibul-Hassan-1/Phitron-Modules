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

void inset_tail(Node *&head, Node *&tail, int val)
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

void findMinMax(Node *head, int &maximum, int &minimum)
{
    if (head == NULL)
    {
        maximum = minimum = 0;
        return;
    }

    maximum = minimum = head->value;
    Node *newNode = head->next;
    for (Node *i = newNode; newNode != NULL; i = i->next)
    {
        if (newNode->value > maximum)
        {
            maximum = newNode->value;
        }
        if (newNode->value < minimum)
        {
            minimum = newNode->value;
        }
        newNode = newNode->next;
    }
    cout << maximum << " " << minimum;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        inset_tail(head, tail, val);
    }

    int maximum, minimum;
    findMinMax(head, maximum, minimum);

    return 0;
}