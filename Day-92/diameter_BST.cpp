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

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

int calculateHeight(const Node* root, int& diameter) {
    if (!root) return 0;

    int leftHeight = calculateHeight(root->left, diameter);
    int rightHeight = calculateHeight(root->right, diameter);

    diameter = max(diameter, leftHeight + rightHeight);
    return 1 + max(leftHeight, rightHeight);
}

int diameter(const Node* root) {
    int result = 0;
    calculateHeight(root, result);
    return result;
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

    cout << "Diameter of BST: " << diameter(root) << '\n';
    destroy(root);
    return 0;
}
