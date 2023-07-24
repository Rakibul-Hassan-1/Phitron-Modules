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
        Node *left_sub, *righ_sub;
        cin >> l >> r;

        if (l == -1)
            left_sub = NULL;
        else
            left_sub = new Node(l);

        if (r == -1)
            righ_sub = NULL;

        else
            righ_sub = new Node(r);

        f->left = left_sub;
        f->right = righ_sub;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return root;
}
int count_leaf(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}
int count_node(Node *root)
{
    if (root == NULL)
        return 0;

    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}

int maxHight(Node *root)
{
    if (root == NULL)
        return 0;

    int l = maxHight(root->left);
    int r = maxHight(root->right);
    return max(l, r) + 1;
}

long long leftSum(Node *root)
{
    // Write your code here.
    if (root == NULL)
        return 0;
    long long sum = 0;
    if (root->left != NULL)
    {
        sum += root->left->value + leftSum(root->left);
    }

    sum += leftSum(root->right);

    return sum;
}

int main()
{

    Node *root = input();
    cout << count_leaf(root) << endl;
    cout << count_node(root) << endl;
    cout << maxHight(root) << endl;
    cout << leftSum(root) << endl;

    return 0;
}