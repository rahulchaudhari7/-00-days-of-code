#include <iomanip>
#include <iostream>
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

void inorder(const Node* root, vector<int>& values) {
    if (!root) return;
    inorder(root->left, values);
    values.push_back(root->data);
    inorder(root->right, values);
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

    vector<int> values;
    inorder(root, values);

    if (values.empty()) {
        cout << "Median is undefined for an empty BST.\n";
    } else {
        int size = static_cast<int>(values.size());
        double median = size % 2 == 1
                            ? values[size / 2]
                            : (values[size / 2 - 1] + values[size / 2]) / 2.0;
        cout << fixed << setprecision(1);
        cout << "Median of BST: " << median << '\n';
    }

    destroy(root);
    return 0;
}
