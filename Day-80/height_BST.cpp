#include <algorithm>
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    explicit Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (!root) return new Node(value);
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    return root;
}

// Height counts edges: an empty tree has height -1, a leaf has height 0.
int height(const Node* root) {
    if (!root) return -1;
    return 1 + max(height(root->left), height(root->right));
}

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
    cout << "Height of BST: " << height(root) << '\n';
    destroy(root);
    return 0;
}
