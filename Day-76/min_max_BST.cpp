
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

int findMin(Node* root) {
    while (root->left != nullptr)
        root = root->left;
    return root->data;
}

int findMax(Node* root) {
    while (root->right != nullptr)
        root = root->right;
    return root->data;
}

int main() {
    Node* root = nullptr;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tree is empty";
        return 0;
    }

    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Minimum element: " << findMin(root) << '\n';
    cout << "Maximum element: " << findMax(root) << '\n';

    return 0;
}
