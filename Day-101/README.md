# Day 101 – AVL Tree Deletion

## Problem

Build an AVL Tree, delete a requested value, rebalance the tree if needed, and print preorder traversal. Duplicate insertion values are ignored.

## Example

Input:

```text
6
10 20 30 40 50 25
40
```

Output:

```text
Preorder after deletion: 30 20 10 25 50
```

## Approach

1. Insert input values into an AVL Tree.
2. Delete the target using standard Binary Search Tree deletion rules.
3. Update heights while returning from recursive calls.
4. Calculate the balance factor at every affected node.
5. Use the required AVL rotation to restore balance.

## Complexity Analysis

- Deletion: O(log n)
- Building the tree: O(n log n)
- Space Complexity: O(h)

Here, `n` is the number of unique values and `h` is the height of the AVL Tree.

## Concepts Used

- AVL Tree
- Binary Search Tree Deletion
- Tree Rotations
- Height and Balance Factor
- Recursion

## What I Learned

Deletion can unbalance an AVL Tree at multiple ancestors, so each node on the return path must update its height and check whether rotations are needed.
