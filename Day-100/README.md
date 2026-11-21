# Day 100 – AVL Tree Insertion

## Problem

Build an AVL Tree by inserting input values and print its preorder traversal. An AVL Tree is a self-balancing Binary Search Tree where the height difference between the left and right subtrees of every node is at most one. Duplicate values are ignored.

## Example

Input:

```text
6
10 20 30 40 50 25
```

Output:

```text
Preorder traversal of AVL tree: 30 20 10 25 40 50
```

## Approach

1. Insert values using Binary Search Tree rules.
2. Update the height of each node after insertion.
3. Calculate the balance factor of every ancestor node.
4. Apply one of four rotations when a node becomes unbalanced:
   - Left-Left
   - Right-Right
   - Left-Right
   - Right-Left
5. Print the final AVL Tree in preorder.

## Complexity Analysis

- Insertion: O(log n)
- Building the tree: O(n log n)
- Space Complexity: O(h)

Here, `n` is the number of unique values and `h` is the height of the AVL Tree.

## Concepts Used

- AVL Tree
- Binary Search Tree
- Tree Rotations
- Height and Balance Factor
- Recursion

## What I Learned

AVL rotations keep a Binary Search Tree balanced after insertion, ensuring that search and insertion remain efficient even when values arrive in sorted order.

## Milestone

This completes Day 100 of the coding challenge.
