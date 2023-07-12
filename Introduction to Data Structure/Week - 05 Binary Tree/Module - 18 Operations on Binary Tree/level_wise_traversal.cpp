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

void levelOrder(Node *root)
{
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
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    // conneections
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    h->right = i;
    d->right = g;
    d->left = f;

    levelOrder(root);

    return 0;
}