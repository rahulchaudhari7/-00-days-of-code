# Day 82 – Count Leaf Nodes in a Binary Search Tree

## Problem
Build a Binary Search Tree from the input integers and count the leaf nodes. A leaf has neither a left nor a right child. Duplicate values are ignored.

## Example
Input:
```text
7
50 30 70 20 40 60 80
```

Output:
```text
Leaf nodes: 4
```

The leaves are 20, 40, 60, and 80.

## Approach
1. Insert each input value into the BST.
2. Return 0 for an empty subtree.
3. Return 1 when both children of a node are absent.
4. Otherwise, add the leaf counts of the left and right subtrees.
5. Release the allocated tree after counting.

An empty tree has 0 leaves; a single-node tree has 1 leaf.

## Complexity
- Building the BST: O(nh), worst-case O(n²) for a skewed tree.
- Counting leaves: O(n) time and O(h) recursion space.
- Tree storage: O(n), where n is the number of unique values and h is tree height.

## What I Learned
Leaf detection requires checking both children. An internal node with only one child is not a leaf, and subtree results can be combined using addition.
