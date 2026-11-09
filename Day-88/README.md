# Day 88 – Floor and Ceil in a Binary Search Tree

## Problem

Build a Binary Search Tree and find the floor and ceil of a target value.

- Floor: the greatest value less than or equal to the target.
- Ceil: the smallest value greater than or equal to the target.

The program prints `-1` when the required value does not exist. Duplicate values are ignored.

## Example

Input:

```text
7
50 30 70 20 40 60 80
55
```

Output:

```text
Floor: 50
Ceil: 60
```

## Approach

1. Build the BST from the input values.
2. Start at the root and compare the target with the current node.
3. When the target is smaller, record the current node as a possible ceil and move left.
4. When the target is larger, record the current node as a possible floor and move right.
5. If the target is found, it is both the floor and the ceil.

## Complexity Analysis

- Time Complexity: O(h)
- Space Complexity: O(1)

Here, `h` is the height of the Binary Search Tree.

## Concepts Used

- Binary Search Tree
- Tree Searching
- Floor and Ceil
- Iterative Traversal

## What I Learned

The BST ordering rule lets us update possible floor and ceil values while moving through only one root-to-leaf path.
