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

bool perfect_tree(Node *root)
{
    if (root->left == NULL && root->right == NULL)
        return true;
        
    if (root->left == NULL || root->right == NULL)
        return false;

    bool l = perfect_tree(root->left);
    bool r = perfect_tree(root->right);

    if (l == false || r == false)
        return false;

    return true;
}

int main()
{
    Node *root = input();

    if (perfect_tree(root) == true)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}