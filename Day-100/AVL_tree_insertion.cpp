#include <algorithm>
#include <iostream>
using namespace std;

struct Node {
    int data;
    int height;
    Node *left, *right;

    explicit Node(int value)
        : data(value), height(1), left(nullptr), right(nullptr) {}
};

int height(const Node* node) {
    return node ? node->height : 0;
}

int balanceFactor(const Node* node) {
    return node ? height(node->left) - height(node->right) : 0;
}

Node* rotateRight(Node* root) {
    Node* newRoot = root->left;
    Node* middleSubtree = newRoot->right;

    newRoot->right = root;
    root->left = middleSubtree;

    root->height = 1 + max(height(root->left), height(root->right));
    newRoot->height = 1 + max(height(newRoot->left), height(newRoot->right));
    return newRoot;
}

Node* rotateLeft(Node* root) {
    Node* newRoot = root->right;
    Node* middleSubtree = newRoot->left;

    newRoot->left = root;
    root->right = middleSubtree;

    root->height = 1 + max(height(root->left), height(root->right));
    newRoot->height = 1 + max(height(newRoot->left), height(newRoot->right));
    return newRoot;
}

Node* insert(Node* root, int value) {
    if (!root) return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        return root;

    root->height = 1 + max(height(root->left), height(root->right));
    int balance = balanceFactor(root);

    if (balance > 1 && value < root->left->data)
        return rotateRight(root);

    if (balance < -1 && value > root->right->data)
        return rotateLeft(root);

    if (balance > 1 && value > root->left->data) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }

    if (balance < -1 && value < root->right->data) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}

void preorder(const Node* root) {
    if (!root) return;
    cout << root->data << ' ';
    preorder(root->left);
    preorder(root->right);
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

    cout << "Preorder traversal of AVL tree: ";
    preorder(root);
    cout << '\n';

    destroy(root);
    return 0;
}
