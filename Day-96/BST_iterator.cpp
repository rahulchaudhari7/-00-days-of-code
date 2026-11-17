#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    explicit Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (!root) return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

class BSTIterator {
    stack<const Node*> nodes;

    void pushLeftPath(const Node* node) {
        while (node) {
            nodes.push(node);
            node = node->left;
        }
    }

public:
    explicit BSTIterator(const Node* root) {
        pushLeftPath(root);
    }

    bool hasNext() const {
        return !nodes.empty();
    }

    int next() {
        const Node* current = nodes.top();
        nodes.pop();
        pushLeftPath(current->right);
        return current->data;
    }
};

void destroy(Node* root) {
    if (!root) return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    int n, value;
    if (!(cin >> n) || n < 0) return 1;

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        if (!(cin >> value)) {
            destroy(root);
            return 1;
        }
        root = insert(root, value);
    }

    BSTIterator iterator(root);
    cout << "Iterator output: ";
    while (iterator.hasNext()) cout << iterator.next() << ' ';
    cout << '\n';

    destroy(root);
    return 0;
}
