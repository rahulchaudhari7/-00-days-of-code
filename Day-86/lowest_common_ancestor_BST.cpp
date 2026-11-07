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

Node* find(Node* root, int value) {
    while (root) {
        if (value == root->data) return root;
        root = value < root->data ? root->left : root->right;
    }

    return nullptr;
}

Node* lowestCommonAncestor(Node* root, int first, int second) {
    while (root) {
        if (first < root->data && second < root->data)
            root = root->left;
        else if (first > root->data && second > root->data)
            root = root->right;
        else
            return root;
    }

    return nullptr;
}

void destroy(Node* root) {
    if (!root) return;

    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    int n, value, first, second;
    if (!(cin >> n) || n < 0) return 1;

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        if (!(cin >> value)) {
            destroy(root);
            return 1;
        }
        root = insert(root, value);
    }

    if (!(cin >> first >> second)) {
        destroy(root);
        return 1;
    }

    if (!find(root, first) || !find(root, second)) {
        cout << "One or both values are not present in the BST.\n";
    } else {
        Node* ancestor = lowestCommonAncestor(root, first, second);
        cout << "Lowest common ancestor: " << ancestor->data << '\n';
    }

    destroy(root);
    return 0;
}
