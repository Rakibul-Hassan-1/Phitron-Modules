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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head = NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}