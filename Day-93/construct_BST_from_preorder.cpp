#include <climits>
#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    explicit Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* buildFromPreorder(const vector<int>& preorder, int& index,
                        long long low, long long high) {
    if (index == static_cast<int>(preorder.size())) return nullptr;

    int value = preorder[index];
    if (value <= low || value >= high) return nullptr;

    ++index;
    Node* root = new Node(value);
    root->left = buildFromPreorder(preorder, index, low, value);
    root->right = buildFromPreorder(preorder, index, value, high);
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
    int n;
    if (!(cin >> n) || n < 0) return 1;

    vector<int> preorder(n);
    for (int& value : preorder) {
        if (!(cin >> value)) return 1;
    }

    int index = 0;
    Node* root = buildFromPreorder(preorder, index, LLONG_MIN, LLONG_MAX);

    if (index != n) {
        cout << "Invalid preorder traversal for a BST.\n";
        destroy(root);
        return 0;
    }

    cout << "Inorder traversal: ";
    inorder(root);
    cout << '\n';

    destroy(root);
    return 0;
}
