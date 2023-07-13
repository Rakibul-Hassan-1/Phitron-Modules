#include <iostream>
#include <queue>
#include <vector>

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *buildTree(std::vector<int> &nodes)
{
    if (nodes.empty())
        return nullptr;

    Node *root = new Node(nodes[0]);
    std::queue<Node *> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < nodes.size())
    {
        Node *currNode = q.front();
        q.pop();

        int leftValue = nodes[i++];
        if (leftValue != -1)
        {
            currNode->left = new Node(leftValue);
            q.push(currNode->left);
        }

        if (i < nodes.size())
        {
            int rightValue = nodes[i++];
            if (rightValue != -1)
            {
                currNode->right = new Node(rightValue);
                q.push(currNode->right);
            }
        }
    }

    return root;
}

void printLevel(Node *root, int level)
{
    if (root == nullptr)
    {
        std::cout << "Invalid";
        return;
    }

    std::queue<Node *> q;
    q.push(root);

    int currentLevel = 0;
    bool foundLevel = false;

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();

            if (currentLevel == level)
            {
                std::cout << node->value << " ";
                foundLevel = true;
            }

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }

        currentLevel++;
        if (foundLevel)
            break;
    }

    if (!foundLevel)
        std::cout << "Invalid";
}

int main()
{
    std::vector<int> nodes;
    int val;
    while (std::cin >> val)
    {
        nodes.push_back(val);
    }

    int level;
    std::cin >> level;

    Node *root = buildTree(nodes);
    printLevel(root, level);

    return 0;
}
