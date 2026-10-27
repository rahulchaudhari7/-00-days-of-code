
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

bool search(Node* root, int target) {
    if (root == nullptr)
        return false;

    if (root->data == target)
        return true;

    if (target < root->data)
        return search(root->left, target);

    return search(root->right, target);
}

int main() {
    Node* root = nullptr;
    int n, value, target;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Enter target to search: ";
    cin >> target;

    if (search(root, target))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
