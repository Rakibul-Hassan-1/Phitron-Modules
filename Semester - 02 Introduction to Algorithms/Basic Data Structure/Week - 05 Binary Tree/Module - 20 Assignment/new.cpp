#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int value;
    Node* right;
    Node* left;
    Node(int value) {
        this->value = value;
        this->right = nullptr;
        this->left = nullptr;
    }
};

Node* input() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1) {
        root = nullptr;
    }
    else {
        root = new Node(val);
    }
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* left_subTree = nullptr;
        Node* right_subTree = nullptr;

        if (l != -1) {
            left_subTree = new Node(l);
            q.push(left_subTree);
        }

        if (r != -1) {
            right_subTree = new Node(r);
            q.push(right_subTree);
        }

        parent->left = left_subTree;
        parent->right = right_subTree;
    }
    return root;
}

void level_order(Node* root) {
    if (root == nullptr) {
        return;
    }
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        cout << f->value << " ";

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

int main() {
    Node* root = input();
    level_order(root);
    return 0;
}
