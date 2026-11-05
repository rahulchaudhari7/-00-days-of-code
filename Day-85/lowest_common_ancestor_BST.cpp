#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    explicit Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (!root) return new Node(value);
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    return root;
}

bool contains(const Node* root, int value) {
    while (root) {
        if (value == root->data) return true;
        root = value < root->data ? root->left : root->right;
    }
    return false;
}

const Node* lowestCommonAncestor(const Node* root, int first, int second) {
    while (root) {
        if (first < root->data && second < root->data) {
            root = root->left;
        } else if (first > root->data && second > root->data) {
            root = root->right;
        } else {
            return root;
        }
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
    int n;
    if (!(cin >> n) || n < 0) return 1;

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        int value;
        if (!(cin >> value)) {
            destroy(root);
            return 1;
        }
        root = insert(root, value);
    }

    int first, second;
    if (!(cin >> first >> second)) {
        destroy(root);
        return 1;
    }

    if (!contains(root, first) || !contains(root, second)) {
        cout << "One or both values are not present in the BST\n";
    } else {
        const Node* ancestor = lowestCommonAncestor(root, first, second);
        if (ancestor) cout << "Lowest common ancestor: " << ancestor->data << '\n';
    }

    destroy(root);
    return 0;
}
