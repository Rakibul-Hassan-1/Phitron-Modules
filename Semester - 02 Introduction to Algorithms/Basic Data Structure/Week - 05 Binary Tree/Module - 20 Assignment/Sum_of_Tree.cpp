#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int value;
    Node *right;
    Node *left;
    Node(int value)
    {
        this->value = value;
        this->right = NULL;
        this->left = NULL;
    }
};
Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left_subTree, *right_subTree;

        if (l == -1)
            left_subTree = NULL;

        else
            left_subTree = new Node(l);

        if (r == -1)
            right_subTree = NULL;

        else
            right_subTree = new Node(r);

        parent->left = left_subTree;
        parent->right = right_subTree;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

int sumTree(Node *root)
{
    if (root == nullptr)
        return 0;

    int sum = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        sum += f->value;
        
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return sum;
}

int main()
{
    Node *root = input();
    cout << sumTree(root);
    return 0;
}