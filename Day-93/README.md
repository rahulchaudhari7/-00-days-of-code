# Day 93 – Construct a Binary Search Tree from Preorder Traversal

## Problem

Given the preorder traversal of a Binary Search Tree, construct the original BST and print its inorder traversal. The input values must be distinct.

## Example

Input:

```text
6
50 30 20 40 70 60
```

Output:

```text
Inorder traversal: 20 30 40 50 60 70
```

## Approach

1. Read preorder values from left to right.
2. Track the allowed lower and upper value bounds for every subtree.
3. Create a node only when the current preorder value fits inside those bounds.
4. Construct the left subtree first, followed by the right subtree.
5. Print inorder traversal to verify that the constructed BST is sorted.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(h)

Here, `n` is the number of nodes and `h` is the height of the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Preorder Traversal
- Recursion
- Value Bounds

## What I Learned

Value bounds make it possible to reconstruct a BST from preorder traversal in one pass, without repeatedly searching for subtree boundaries.
