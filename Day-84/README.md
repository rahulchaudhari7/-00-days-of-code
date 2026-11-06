# Day 84 – Delete a Node from a Binary Search Tree

## Problem
Build a Binary Search Tree, remove one requested value, and print the resulting tree in inorder order. Duplicate values are ignored.

## Example
Input:
```text
7
50 30 70 20 40 60 80
50
```

Output:
```text
BST after deletion: 20 30 40 60 70 80
```

## Approach
1. Find the node using the BST ordering rule.
2. For a leaf, remove it directly.
3. For a node with one child, connect its parent to that child.
4. For a node with two children, replace its value with the smallest value in its right subtree, then remove that successor.

## Complexity
- Delete: O(h) time and O(h) recursive stack space.
- Building the BST: O(nh), with O(n²) in the worst case for sorted input.

## What I Learned
Replacing a two-child node with its inorder successor preserves the BST ordering rule.
