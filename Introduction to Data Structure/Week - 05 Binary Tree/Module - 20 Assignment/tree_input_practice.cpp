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
        root = NULL;

    else
        root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left_sub_tree, *right_sub_tree;
        if (l == -1)
            left_sub_tree = NULL;
        else
            left_sub_tree = new Node(l);

        if (r == -1)
            right_sub_tree = NULL;
        else
            right_sub_tree = new Node(r);

        f->left = left_sub_tree;
        f->right = right_sub_tree;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void leverl_order(Node *root)
{
    vector<int> v;

    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        v.push_back(f->value);

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
}

int main()
{
    Node *root = input();
    leverl_order(root);

    return 0;
}