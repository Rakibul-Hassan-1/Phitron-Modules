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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

bool isPalindrome(Node *head)
{
    if (head == nullptr)
    {
        return true;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    while (head != temp)
    {
        if (head->value != temp->value)
        {
            return false;
        }
        head = head->next;
        temp = temp->prev;
    }
    return true;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_tail(head, tail, val);
    }

    if (isPalindrome(head))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}