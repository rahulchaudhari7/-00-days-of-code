# Day 87 – Kth Smallest Element in a Binary Search Tree

## Problem

Build a Binary Search Tree and find its kth smallest element. Duplicate values are ignored.

## Example

Input:

```text
7
50 30 70 20 40 60 80
3
```

Output:

```text
Kth smallest element: 40
```

## Approach

1. Build the BST from the input values.
2. Perform iterative inorder traversal with a stack.
3. Decrease `k` whenever a node is visited.
4. The node that makes `k` equal to zero is the kth smallest element.

Inorder traversal of a BST visits values in ascending order.

## Complexity Analysis

- Time Complexity: O(h + k)
- Space Complexity: O(h)

Here, `h` is the height of the BST.

## Concepts Used

- Binary Search Tree
- Inorder Traversal
- Stack
- Iterative Tree Traversal

## What I Learned

An inorder traversal produces sorted values in a BST, so it can find an order statistic such as the kth smallest element without sorting all values separately.
