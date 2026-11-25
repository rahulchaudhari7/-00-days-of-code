# Day 103 – Trie Prefix Search

## Problem

Store lowercase English words in a Trie and print every stored word that starts with a requested prefix.

## Example

Input:

```text
4
apple app bat ball
app
```

Output:

```text
Matching words: app apple
```

## Approach

1. Insert all words into a Trie.
2. Follow the characters of the requested prefix.
3. If the prefix path exists, perform depth-first traversal from that node.
4. Collect every node marked as a complete word.

## Complexity Analysis

- Prefix lookup: O(P)
- Collecting matches: O(total characters in matching words)
- Space Complexity: O(total characters stored)

Here, `P` is the length of the requested prefix.

## Concepts Used

- Trie
- Prefix Tree
- Depth-First Search
- Recursion
- String Searching

## What I Learned

A Trie can find the starting node for a prefix quickly, then traverse only the relevant subtree to return matching words.
