#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string value;
    Node *next;
    Node(string value)
    {
        this->value = value;
        this->next = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(string val)
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
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    string front()
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
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int Q;
    cin >> Q;
    myQueue queue;
    for (int i = 0; i < Q; i++)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            cin >> name;
            queue.push(name);
        }
        else if (command == 1)
        {
            if (queue.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << queue.front() << endl;
                queue.pop();
            }
        }
    }
    return 0;
}
