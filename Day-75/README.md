# Day 75 – Search an Element in a Binary Search Tree

## Problem
Create a Binary Search Tree (BST) and search for a target element. Display whether the element exists in the tree.

## Example
**Input**
```text
5
50 30 70 20 40
40
```

**Output**
```text
Element found
```

## Approach
1. Insert the given values into the BST.
2. Compare the target with the current node.
3. Search the left subtree if the target is smaller.
4. Search the right subtree if the target is greater.
5. Report whether the target exists.

## Concepts Used
- Binary Search Tree
- Binary tree nodes
- Recursion
- Searching

## Complexity Analysis
- Average time complexity: O(log n)
- Worst-case time complexity: O(n)
- Auxiliary space complexity: O(h), where h is the height of the tree.

## What I Learned
- How to construct a Binary Search Tree.
- How BST ordering helps search for an element.
- How recursion is used to traverse a tree.

