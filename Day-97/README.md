# Day 97 – Convert a BST to a Greater Sum Tree

## Problem

Build a Binary Search Tree and replace every node value with the sum of all values greater than or equal to that node's original value. Duplicate input values are ignored.

## Example

Input:

```text
5
5 2 13 1 3
```

Output:

```text
Greater sum tree inorder: 24 23 21 18 13
```

## Approach

1. Build the BST from the input values.
2. Traverse the tree in reverse inorder order: right, node, left.
3. Keep a running sum of values already visited.
4. Replace the current node value with the running sum.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(h)

Here, `n` is the number of nodes and `h` is the height of the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Reverse Inorder Traversal
- Recursion
- Running Sum

## What I Learned

Reverse inorder traversal visits BST values from largest to smallest, which makes a running sum sufficient for building a greater sum tree in one pass.
