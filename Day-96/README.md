# Day 96 – Binary Search Tree Iterator

## Problem

Build a Binary Search Tree and iterate through its values in ascending order. The iterator should return one value at a time instead of storing the full inorder traversal. Duplicate input values are ignored.

## Example

Input:

```text
7
50 30 70 20 40 60 80
```

Output:

```text
Iterator output: 20 30 40 50 60 70 80
```

## Approach

1. Build the BST from the input values.
2. Push the path from the root to the leftmost node onto a stack.
3. Pop the next smallest node from the stack.
4. Push the leftmost path of its right subtree.
5. Repeat until the stack is empty.

## Complexity Analysis

- `next()`: O(1) amortized time
- `hasNext()`: O(1) time
- Space Complexity: O(h)

Here, `h` is the height of the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Inorder Traversal
- Stack
- Iterator Design

## What I Learned

A stack can store only the path needed for the next inorder value, which avoids creating a separate sorted list of every node.
