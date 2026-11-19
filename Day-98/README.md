# Day 98 – Convert a Sorted Array to a Balanced Binary Search Tree

## Problem

Given a sorted array of distinct values, construct a height-balanced Binary Search Tree and print its preorder traversal.

## Example

Input:

```text
7
10 20 30 40 50 60 70
```

Output:

```text
Preorder traversal of balanced BST: 40 20 10 30 60 50 70
```

## Approach

1. Choose the middle value of the sorted range as the root.
2. Recursively build the left subtree from values before the middle.
3. Recursively build the right subtree from values after the middle.
4. Print preorder traversal of the balanced BST.

Choosing the middle element at every step keeps the tree balanced.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(h)

Here, `n` is the number of array values and `h` is the height of the resulting tree.

## Concepts Used

- Binary Search Tree
- Divide and Conquer
- Recursion
- Balanced Tree Construction

## What I Learned

A sorted array can form a balanced BST by repeatedly making its middle element the root of the current subtree.
