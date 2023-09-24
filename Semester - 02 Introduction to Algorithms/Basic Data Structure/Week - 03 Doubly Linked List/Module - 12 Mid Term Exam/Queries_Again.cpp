#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next, *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert(Node *&head, Node *&tail, int index, int value)
{
    Node *newNode = new Node(value);

    if (index < 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (head == NULL)
    {
        if (index != 0)
        {
            cout << "Invalid" << endl;
            return;
        }
        head = newNode;
        tail = newNode;
    }
    else if (index == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        int currIndex = 0;

        while (temp != NULL && currIndex < index)
        {
            temp = temp->next;
            currIndex++;
        }

        if (temp == NULL && currIndex == index)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else if (temp != NULL)
        {
            newNode->prev = temp->prev;
            newNode->next = temp;
            temp->prev->next = newNode;
            temp->prev = newNode;
        }
        else
        {
            cout << "Invalid" << endl;
            return;
        }
    }

    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        int X, V;
        cin >> X >> V;
        insert(head, tail, X, V);
    }

    return 0;
}
