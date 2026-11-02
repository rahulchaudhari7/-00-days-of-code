# Day 81 – Level-Order Traversal of a Binary Search Tree

## Problem
Build a Binary Search Tree from the input integers and print its nodes level by level, visiting each level from left to right. Duplicate values are ignored.

## Example
Input:
```text
7
50 30 70 20 40 60 80
```

Output:
```text
Level-order traversal: 50 30 70 20 40 60 80
```

## Approach
1. Insert each value into the BST.
2. Place the root into a queue, unless the tree is empty.
3. Remove and print the front node, then enqueue its left and right children in that order.
4. Repeat until the queue is empty and release the allocated tree afterward.

An empty tree prints only the traversal label.

## Complexity
- Building the BST: O(nh), worst-case O(n²) for a skewed tree.
- Traversal: O(n) time and O(w) queue space, where w is maximum tree width.
- Tree storage: O(n); recursive insertion and cleanup use O(h) stack space.
- Here n is the number of unique values and h is tree height.

## What I Learned
A FIFO queue implements breadth-first traversal by processing parents before their children, preserving left-to-right order within each level.
