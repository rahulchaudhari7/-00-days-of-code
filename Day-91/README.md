# Day 91 – Check Whether a Binary Search Tree Is Balanced

## Problem

Build a Binary Search Tree and determine whether it is height-balanced.

A tree is balanced when the height difference between the left and right subtree of every node is at most one. Duplicate values are ignored.

## Example

Input:

```text
7
50 30 70 20 40 60 80
```

Output:

```text
BST is balanced
```

## Approach

1. Build the BST from the input values.
2. Recursively calculate the height of each subtree.
3. Return `-1` immediately when a subtree is unbalanced.
4. Otherwise, return its height to the parent node.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(h)

Here, `n` is the number of nodes and `h` is the height of the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Recursion
- Tree Height
- Balanced Binary Tree

## What I Learned

Returning a special value for an unbalanced subtree avoids calculating the same heights repeatedly, keeping the check linear in the number of nodes.
