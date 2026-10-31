# Day 79 – Postorder Traversal of a Binary Search Tree

## Problem
Build a Binary Search Tree from the given integers and print its postorder traversal: left subtree, right subtree, then the current node. Duplicate values are ignored.

## Example
Input:
```text
7
50 30 70 20 40 60 80
```

Output:
```text
Postorder traversal: 20 40 30 60 80 70 50
```

## Approach
1. Insert each value into the BST.
2. Recursively visit the left and right subtrees before printing the node.
3. Release the allocated nodes after traversal.

## Complexity
- Building the BST: O(nh), worst-case O(n²) for a skewed tree.
- Traversal: O(n) time and O(h) recursion space.
- Tree storage: O(n), where n is the number of unique values and h is tree height.

## What I Learned
Postorder visits children before their parent. This ordering also allows tree nodes to be safely deleted after their children.
