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

int maxHight(Node *root)
{
    // base case
    if (root == NULL)
        return 0;

    int l = maxHight(root->left);
    int r = maxHight(root->right);

    return max(l, r) + 1;
}

int main()
{
    Node *root = input();
    
    cout << maxHight(root);

    return 0;
}