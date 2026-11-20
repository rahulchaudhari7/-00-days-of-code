#include <iostream>
#include <map>
#include <queue>
#include <vector>
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

void verticalOrder(const Node* root) {
    if (!root) return;

    map<int, vector<int>> columns;
    queue<pair<const Node*, int>> pending;
    pending.push({root, 0});

    while (!pending.empty()) {
        const Node* current = pending.front().first;
        int column = pending.front().second;
        pending.pop();

        columns[column].push_back(current->data);
        if (current->left) pending.push({current->left, column - 1});
        if (current->right) pending.push({current->right, column + 1});
    }

    for (const auto& entry : columns) {
        for (int value : entry.second) cout << value << ' ';
        cout << '|';
    }
}

void destroy(Node* root) {
    if (!root) return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    int n, value;
    if (!(cin >> n) || n < 0) return 1;

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        if (!(cin >> value)) {
            destroy(root);
            return 1;
        }
        root = insert(root, value);
    }

    cout << "Vertical order: ";
    verticalOrder(root);
    cout << '\n';

    destroy(root);
    return 0;
}
