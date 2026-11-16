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

vector<int> mergeSorted(const vector<int>& first, const vector<int>& second) {
    vector<int> merged;
    size_t i = 0, j = 0;

    while (i < first.size() && j < second.size()) {
        if (first[i] <= second[j])
            merged.push_back(first[i++]);
        else
            merged.push_back(second[j++]);
    }

    while (i < first.size()) merged.push_back(first[i++]);
    while (j < second.size()) merged.push_back(second[j++]);
    return merged;
}

void destroy(Node* root) {
    if (!root) return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    int firstCount, secondCount, value;
    if (!(cin >> firstCount) || firstCount < 0) return 1;

    Node* firstRoot = nullptr;
    for (int i = 0; i < firstCount; ++i) {
        if (!(cin >> value)) {
            destroy(firstRoot);
            return 1;
        }
        firstRoot = insert(firstRoot, value);
    }

    if (!(cin >> secondCount) || secondCount < 0) {
        destroy(firstRoot);
        return 1;
    }

    Node* secondRoot = nullptr;
    for (int i = 0; i < secondCount; ++i) {
        if (!(cin >> value)) {
            destroy(firstRoot);
            destroy(secondRoot);
            return 1;
        }
        secondRoot = insert(secondRoot, value);
    }

    vector<int> firstValues, secondValues;
    inorder(firstRoot, firstValues);
    inorder(secondRoot, secondValues);

    vector<int> merged = mergeSorted(firstValues, secondValues);
    cout << "Merged sorted values: ";
    for (int number : merged) cout << number << ' ';
    cout << '\n';

    destroy(firstRoot);
    destroy(secondRoot);
    return 0;
}
