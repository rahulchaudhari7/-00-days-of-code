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

Node* minimum(Node* root) {
    while (root->left) root = root->left;
    return root;
}

Node* erase(Node* root, int value) {
    if (!root) return nullptr;
    if (value < root->data) root->left = erase(root->left, value);
    else if (value > root->data) root->right = erase(root->right, value);
    else {
        if (!root->left) {
            Node* next = root->right;
            delete root;
            return next;
        }
        if (!root->right) {
            Node* next = root->left;
            delete root;
            return next;
        }
        Node* successor = minimum(root->right);
        root->data = successor->data;
        root->right = erase(root->right, successor->data);
    }
    return root;
}

void inorder(const Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}

void destroy(Node* root) {
    if (!root) return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    int n, value, target;
    if (!(cin >> n) || n < 0) return 1;

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        if (!(cin >> value)) {
            destroy(root);
            return 1;
        }
        root = insert(root, value);
    }
    if (!(cin >> target)) {
        destroy(root);
        return 1;
    }

    root = erase(root, target);
    cout << "BST after deletion: ";
    inorder(root);
    cout << '\n';
    destroy(root);
    return 0;
}
