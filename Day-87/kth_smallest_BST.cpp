#include <iostream>
#include <stack>
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

bool kthSmallest(const Node* root, int k, int& answer) {
    stack<const Node*> nodes;
    const Node* current = root;

    while (current || !nodes.empty()) {
        while (current) {
            nodes.push(current);
            current = current->left;
        }

        current = nodes.top();
        nodes.pop();

        if (--k == 0) {
            answer = current->data;
            return true;
        }

        current = current->right;
    }

    return false;
}

void destroy(Node* root) {
    if (!root) return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    int n, value, k;
    if (!(cin >> n) || n < 0) return 1;

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        if (!(cin >> value)) {
            destroy(root);
            return 1;
        }
        root = insert(root, value);
    }

    if (!(cin >> k) || k <= 0) {
        cout << "Invalid value of k.\n";
        destroy(root);
        return 0;
    }

    int answer;
    if (kthSmallest(root, k, answer))
        cout << "Kth smallest element: " << answer << '\n';
    else
        cout << "k is larger than the number of nodes.\n";

    destroy(root);
    return 0;
}
