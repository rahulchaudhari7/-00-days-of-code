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

void findFloorAndCeil(const Node* root, int target, int& floorValue, int& ceilValue) {
    floorValue = -1;
    ceilValue = -1;

    while (root) {
        if (root->data == target) {
            floorValue = target;
            ceilValue = target;
            return;
        }

        if (target < root->data) {
            ceilValue = root->data;
            root = root->left;
        } else {
            floorValue = root->data;
            root = root->right;
        }
    }
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

    int floorValue, ceilValue;
    findFloorAndCeil(root, target, floorValue, ceilValue);

    cout << "Floor: " << floorValue << '\n';
    cout << "Ceil: " << ceilValue << '\n';

    destroy(root);
    return 0;
}
