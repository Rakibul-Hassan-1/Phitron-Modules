#include <bits/stdc++.h>
using namespace std;
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

void printLevel(Node *root, int level)
{
    vector<int> v;
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int count = 0;
    while (!q.empty())
    {

        pair<Node *, int> pr = q.front();
        Node *currNode = pr.first;
        int currLevel = pr.second;

        if (currLevel == level)
        {
            v.push_back(currNode->value);
        }

        if (currNode->left)
            q.push({currNode->left, currLevel + 1});

        if (currNode->right)
            q.push({currNode->right, currLevel + 1});

        q.pop();
        count = currLevel++;
    }

    if (count < level)
        cout << "Invalid" << endl;
        
    for (auto x : v)
    {
        cout << x << " ";
    }
}

int main()
{
    Node *root = input_Tree();
    int level;
    cin >> level;
    printLevel(root, level);

    return 0;
}
