#include <array>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct TrieNode {
    array<TrieNode*, 26> children{};
    bool isWord = false;
};

bool isLowercaseWord(const string& text) {
    if (text.empty()) return false;
    for (char character : text) {
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

const TrieNode* findPrefixNode(const TrieNode* root, const string& prefix) {
    const TrieNode* current = root;
    for (char character : prefix) {
        int index = character - 'a';
        if (!current->children[index]) return nullptr;
        current = current->children[index];
    }
    return current;
}

void collectWords(const TrieNode* root, string& current, vector<string>& matches) {
    if (root->isWord) matches.push_back(current);

    for (int index = 0; index < 26; ++index) {
        if (!root->children[index]) continue;
        current.push_back(static_cast<char>('a' + index));
        collectWords(root->children[index], current, matches);
        current.pop_back();
    }
}

void destroy(TrieNode* root) {
    if (!root) return;
    for (TrieNode* child : root->children) destroy(child);
    delete root;
}

int main() {
    int n;
    if (!(cin >> n) || n < 0) return 1;

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

    string prefix;
    if (!(cin >> prefix) || !isLowercaseWord(prefix)) {
        cout << "Use a non-empty lowercase English prefix.\n";
        destroy(root);
        return 1;
    }

    const TrieNode* prefixNode = findPrefixNode(root, prefix);
    if (!prefixNode) {
        cout << "No matching words found.\n";
    } else {
        vector<string> matches;
        string current = prefix;
        collectWords(prefixNode, current, matches);
        cout << "Matching words: ";
        for (const string& match : matches) cout << match << ' ';
        cout << '\n';
    }

    destroy(root);
    return 0;
}
