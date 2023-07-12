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

Node *input_Tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        int l, r;
        Node *left_child, *right_child;
        cin >> l >> r;
        if (l == -1)
            left_child = NULL;
        else
            left_child = new Node(l);

        if (r == -1)
            right_child = NULL;
        else
            right_child = new Node(r);

        parent->left = left_child;
        parent->right = right_child;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }

    return root;
}

void lever_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty!" << endl;
        return;
    }

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
int leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = leaf_nodes(root->left);
        int r = leaf_nodes(root->right);
        return l + r;
    }
}
int main()
{
    Node *root = input_Tree();
    // lever_order(root);
    cout << leaf_nodes(root);

    return 0;
}