#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *head = NULL;

    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }

    int pop()
    {
        if (head == NULL)
            return -1;
        Node *newNode = head;
        head = head->next;
        int val = newNode->data;
        delete newNode;
        return val;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        newNode->data = val;
        newNode->next = NULL;
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int dequeue()
    {
        if (head == NULL)
            return -1;
        Node *newNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        int val = newNode->data;
        delete newNode;
        return val;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;
    Stack s;
    Queue q;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        q.enqueue(val);
    }
    while (true)
    {
        int stackVal = s.pop();
        int queueVal = q.dequeue();
        if (stackVal != queueVal)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (stackVal == -1 || queueVal == -1)
            break;
    }
    cout << "YES" << endl;
    return 0;
}
