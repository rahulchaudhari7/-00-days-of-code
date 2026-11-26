#include <array>
#include <iostream>
#include <string>
using namespace std;

struct TrieNode {
    array<TrieNode*, 26> children{};
    bool isWord = false;
};

bool isLowercaseWord(const string& word) {
    if (word.empty()) return false;
    for (char character : word) {
        if (character < 'a' || character > 'z') return false;
    }
    return true;
}

void insert(TrieNode* root, const string& word) {
    TrieNode* current = root;
    for (char character : word) {
        int index = character - 'a';
        if (!current->children[index]) current->children[index] = new TrieNode();
        current = current->children[index];
    }
    current->isWord = true;
}

int childCount(const TrieNode* node, int& childIndex) {
    int count = 0;
    for (int index = 0; index < 26; ++index) {
        if (node->children[index]) {
            ++count;
            childIndex = index;
        }
    }
    return count;
}

string longestCommonPrefix(const TrieNode* root) {
    string prefix;
    const TrieNode* current = root;
    int nextIndex = -1;

    while (!current->isWord && childCount(current, nextIndex) == 1) {
        prefix.push_back(static_cast<char>('a' + nextIndex));
        current = current->children[nextIndex];
    }

    return prefix;
}

void destroy(TrieNode* root) {
    if (!root) return;
    for (TrieNode* child : root->children) destroy(child);
    delete root;
}

int main() {
    int n;
    if (!(cin >> n) || n <= 0) return 1;

    TrieNode* root = new TrieNode();
    string word;
    for (int i = 0; i < n; ++i) {
        if (!(cin >> word) || !isLowercaseWord(word)) {
            cout << "Use non-empty lowercase English words only.\n";
            destroy(root);
            return 1;
        }
        insert(root, word);
    }

    cout << "Longest common prefix: " << longestCommonPrefix(root) << '\n';
    destroy(root);
    return 0;
}
