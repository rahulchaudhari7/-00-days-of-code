# Day 80 – Height of a Binary Search Tree

## Problem
Build a Binary Search Tree from the input integers and find its height, measured as the number of edges on the longest path from the root to a leaf. An empty tree has height -1 and a single node has height 0. Duplicate values are ignored.

## Example
Input:
```text
7
50 30 70 20 40 60 80
```

Output:
```text
Height of BST: 2
```

## Approach
1. Insert each value into the BST.
2. For an empty subtree, return -1.
3. For each node, return one plus the larger height of its two subtrees.
4. Release all allocated nodes after calculating the height.

## Complexity
- Building the BST: O(nh), worst-case O(n²) for a skewed tree.
- Calculating height: O(n) time and O(h) recursion space.
- Tree storage: O(n), where n is the number of unique values and h is tree height.

## What I Learned
Tree height can be calculated recursively by combining the heights of the left and right subtrees. Sorted insertion produces a skewed BST with height n - 1.
