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

long long rangeSum(const Node* root, int low, int high) {
    if (!root) return 0;

    if (root->data < low)
        return rangeSum(root->right, low, high);

    if (root->data > high)
        return rangeSum(root->left, low, high);

    return root->data + rangeSum(root->left, low, high) +
           rangeSum(root->right, low, high);
}

void destroy(Node* root) {
    if (!root) return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    int n, value, low, high;
    if (!(cin >> n) || n < 0) return 1;

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        if (!(cin >> value)) {
            destroy(root);
            return 1;
        }
        root = insert(root, value);
    }

    if (!(cin >> low >> high)) {
        destroy(root);
        return 1;
    }

    if (low > high) {
        cout << "Invalid range.\n";
    } else {
        cout << "Range sum: " << rangeSum(root, low, high) << '\n';
    }

    destroy(root);
    return 0;
}
