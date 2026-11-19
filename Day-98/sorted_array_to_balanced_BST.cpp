#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    explicit Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* buildBalancedBST(const vector<int>& values, int left, int right) {
    if (left > right) return nullptr;

    int middle = left + (right - left) / 2;
    Node* root = new Node(values[middle]);
    root->left = buildBalancedBST(values, left, middle - 1);
    root->right = buildBalancedBST(values, middle + 1, right);
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
    int n;
    if (!(cin >> n) || n < 0) return 1;

    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        if (!(cin >> values[i])) return 1;
        if (i > 0 && values[i] <= values[i - 1]) {
            cout << "Input must contain distinct values in ascending order.\n";
            return 0;
        }
    }

    Node* root = buildBalancedBST(values, 0, n - 1);
    cout << "Preorder traversal of balanced BST: ";
    preorder(root);
    cout << '\n';

    destroy(root);
    return 0;
}
