# Day 104 – Longest Common Prefix Using a Trie

## Problem

Given lowercase English words, find their longest common prefix using a Trie.

## Example

Input:

```text
3
flower flow flight
```

Output:

```text
Longest common prefix: fl
```

## Approach

1. Insert every word into a Trie.
2. Start from the root.
3. Continue moving down only while a node has exactly one child and is not the end of a word.
4. Each visited character is part of the common prefix.

## Complexity Analysis

- Building the Trie: O(total characters in all words)
- Finding the prefix: O(L)
- Space Complexity: O(total characters stored)

Here, `L` is the length of the longest common prefix.

## Concepts Used

- Trie
- Prefix Tree
- String Processing
- Arrays

## What I Learned

The longest common prefix is the single shared path in a Trie before words split into different branches or one word ends.
