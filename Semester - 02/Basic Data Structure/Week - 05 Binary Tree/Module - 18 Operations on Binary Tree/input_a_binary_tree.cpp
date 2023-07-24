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

Node *input_tree()
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
        // 1. value ber kore ano
        Node *parent = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache ekhane koro
        int l, r;
        Node *left_child;
        Node *right_child;
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

        // 3. children gula push kora
        if (parent->left) // true
            q.push(parent->left);

        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        cout << "Empty Tree!" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. line theke ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache ekhane korte hobe
        cout << f->value << " ";

        // 3. node er childrens gula rakha

        if (f->left) // true
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

int main()
{

    Node *root = input_tree();
    levelOrder(root);

    return 0;
}