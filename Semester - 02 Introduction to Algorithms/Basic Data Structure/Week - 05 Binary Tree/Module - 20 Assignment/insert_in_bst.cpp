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
        Node *f = q.front();
        q.pop();

        int l, r;
        Node *left_sub, *right_sub;
        cin >> l >> r;

        if (l == -1)
            left_sub = NULL;
        else
            left_sub = new Node(l);

        if (r == -1)
            right_sub = NULL;
        else
            right_sub = new Node(r);

        f->left = left_sub;
        f->right = right_sub;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void levelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->value << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void insert(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }
    if (val < root->value)
    {
        if (root->left == NULL)
        {
            root->left = new Node(val);
        }
        else
        {
            insert(root->left, val);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(val);
        }
        else
        {
            insert(root->right, val);
        }
    }
}

int main()
{

    Node *root = input();
    insert(root, 35);
    levelOrder(root);

    return 0;
}