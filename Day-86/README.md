# Day 86 – Lowest Common Ancestor in a Binary Search Tree

## Problem

Build a Binary Search Tree and find the lowest common ancestor of two given values.

The lowest common ancestor is the deepest node that has both values as descendants.

## Example

Input:
```text
7
50 30 70 20 40 60 80
20 40
```

Output:

```text
Lowest common ancestor: 30
```

## Approach

1. Build the BST using the input values.
2. Check that both values exist in the BST.
3. If both values are smaller than the current node, move to the left subtree.
4. If both values are greater than the current node, move to the right subtree.
5. Otherwise, the current node is the lowest common ancestor.

## Complexity Analysis

- Time Complexity: O(h)
- Space Complexity: O(1)

Here, `h` is the height of the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Lowest Common Ancestor
- Iterative Traversal
- Tree Searching

## What I Learned

The BST ordering rule helps find the lowest common ancestor without traversing every node. If two values lie on opposite sides of a node, that node is their lowest common ancestor.
