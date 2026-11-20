# Day 99 – Vertical Order Traversal of a Binary Search Tree

## Problem

Build a Binary Search Tree and print its nodes column by column from left to right. Nodes in the same vertical column are listed from top to bottom. Duplicate input values are ignored.

## Example

Input:

```text
7
50 30 70 20 40 60 80
```

Output:

```text
Vertical order: 20 |30 |50 40 60 |70 |80 |
```

## Approach

1. Build the BST from the input values.
2. Use a queue for level-order traversal.
3. Store each node with its vertical column number.
4. Move left children to `column - 1` and right children to `column + 1`.
5. Use a map to print columns from left to right.

## Complexity Analysis

- Time Complexity: O(n log n)
- Space Complexity: O(n)

Here, `n` is the number of nodes in the Binary Search Tree. The map maintains columns in sorted order.

## Concepts Used

- Binary Search Tree
- Breadth-First Search
- Queue
- Map
- Tree Traversal

## What I Learned

Assigning each node a horizontal distance from the root makes it possible to group tree nodes into vertical columns.
