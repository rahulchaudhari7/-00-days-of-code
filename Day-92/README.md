# Day 92 – Diameter of a Binary Search Tree

## Problem

Build a Binary Search Tree and find its diameter.

The diameter is the number of edges in the longest path between any two nodes. The path may or may not pass through the root. Duplicate values are ignored.

## Example

Input:

```text
7
50 30 70 20 40 60 80
```

Output:

```text
Diameter of BST: 4
```

One longest path is `20 -> 30 -> 50 -> 70 -> 80`.

## Approach

1. Build the BST from the input values.
2. Recursively calculate the height of each subtree.
3. At every node, the path through that node has `leftHeight + rightHeight` edges.
4. Track the largest path found while calculating heights.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(h)

Here, `n` is the number of nodes and `h` is the height of the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Recursion
- Tree Height
- Diameter of a Tree

## What I Learned

Calculating height and updating the diameter in the same traversal prevents repeated work and solves the problem in linear time.
