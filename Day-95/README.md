# Day 95 – Merge Two Binary Search Trees

## Problem

Build two Binary Search Trees and print all their values in one sorted sequence. Duplicate values within a single BST are ignored; matching values from different BSTs are both preserved in the merged result.

## Example

Input:

```text
3
50 30 70
4
20 40 60 80
```

Output:

```text
Merged sorted values: 20 30 40 50 60 70 80
```

## Approach

1. Build both BSTs from their input values.
2. Use inorder traversal to obtain sorted values from each tree.
3. Merge the two sorted vectors with two pointers.
4. Print the merged result.

## Complexity Analysis

- Time Complexity: O(n + m)
- Space Complexity: O(n + m)

Here, `n` and `m` are the numbers of nodes in the two Binary Search Trees.

## Concepts Used

- Binary Search Tree
- Inorder Traversal
- Sorted Array Merge
- Two Pointers

## What I Learned

Inorder traversal turns each BST into a sorted sequence, so the standard merge step from merge sort can combine the results efficiently.
