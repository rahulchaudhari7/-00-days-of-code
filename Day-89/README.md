# Day 89 – Range Sum in a Binary Search Tree

## Problem

Build a Binary Search Tree and find the sum of all node values that lie within an inclusive range `[low, high]`. Duplicate values are ignored.

## Example

Input:

```text
7
50 30 70 20 40 60 80
30 70
```

Output:

```text
Range sum: 250
```

The included values are 30, 40, 50, 60, and 70.

## Approach

1. Build the BST from the input values.
2. If the current value is below `low`, search only the right subtree.
3. If the current value is above `high`, search only the left subtree.
4. Otherwise, add the current value and search both subtrees.

## Complexity Analysis

- Time Complexity: O(n) in the worst case
- Space Complexity: O(h) for recursive calls

Here, `n` is the number of nodes and `h` is the height of the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Recursion
- Range Queries
- Tree Pruning

## What I Learned

BST ordering makes it possible to skip subtrees whose values cannot fall within the requested range.
