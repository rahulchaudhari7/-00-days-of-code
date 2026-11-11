# Day 90 – Pair with Given Sum in a Binary Search Tree

## Problem

Build a Binary Search Tree and determine whether two distinct nodes have values that add up to a target sum. Duplicate input values are ignored.

## Example

Input:

```text
7
50 30 70 20 40 60 80
90
```

Output:

```text
Pair exists
```

For example, 20 and 70 add up to 90.

## Approach

1. Build the BST from the input values.
2. Traverse the tree using inorder traversal.
3. Keep every visited value in a hash set.
4. Before adding the current value, check whether its required complement is already in the set.
5. If a complement is found, a valid pair exists.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(n)

Here, `n` is the number of nodes in the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Inorder Traversal
- Hash Set
- Two Sum Problem

## What I Learned

A hash set records previously visited values, which makes checking for a required complement efficient during tree traversal.
