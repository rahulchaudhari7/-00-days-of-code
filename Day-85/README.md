# Day 85 – Lowest Common Ancestor in a Binary Search Tree

## Problem
Build a Binary Search Tree from the input integers, then find the lowest common ancestor (LCA) of two requested values. Duplicate values are ignored. If either value is absent, report that it is not in the tree.

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
1. Insert the values into a BST.
2. Check that both requested values exist.
3. Starting at the root, move left if both values are smaller, or right if both are larger.
4. The first node where the values split—or one value matches the node—is their LCA.

## Complexity
- Building the BST: O(nh), worst-case O(n²) for a skewed tree.
- Searching for the values and their LCA: O(h) time each.
- Tree storage: O(n), where n is the number of unique values and h is the tree height.

## What I Learned
The BST ordering property lets us find an LCA by following just one path from the root.

## Language
C++
