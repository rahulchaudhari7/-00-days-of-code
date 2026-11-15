# Day 94 – Find the Median of a Binary Search Tree

## Problem

Build a Binary Search Tree and find its median value. Duplicate input values are ignored.

For an odd number of nodes, the median is the middle value. For an even number of nodes, it is the average of the two middle values.

## Example

Input:

```text
6
50 30 70 20 40 60
```

Output:

```text
Median of BST: 45.0
```

## Approach

1. Build the BST from the input values.
2. Use inorder traversal to store values in ascending order.
3. For an odd number of values, select the middle element.
4. For an even number of values, average the two middle elements.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(n)

Here, `n` is the number of unique values in the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Inorder Traversal
- Median
- Vectors

## What I Learned

Inorder traversal of a BST naturally produces sorted values, making it easy to locate the middle element or elements for the median.
