#include <iostream>
#include <unordered_set>
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

bool hasPairWithSum(const Node* root, int target, unordered_set<long long>& seen) {
    if (!root) return false;

    if (hasPairWithSum(root->left, target, seen)) return true;

    long long required = static_cast<long long>(target) - root->data;
    if (seen.count(required)) return true;
    seen.insert(root->data);

    return hasPairWithSum(root->right, target, seen);
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

    unordered_set<long long> seen;
    cout << (hasPairWithSum(root, target, seen) ? "Pair exists\n" : "Pair does not exist\n");

    destroy(root);
    return 0;
}
