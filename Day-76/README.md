# Day 76 – Find Minimum and Maximum in a Binary Search Tree

## Problem
Create a Binary Search Tree and find its minimum and maximum elements.

## Example
**Input**
```text
7
50 30 70 20 40 60 80
```

**Output**
```text
Minimum element: 20
Maximum element: 80
```

## Approach
1. Insert the given values into a Binary Search Tree.
2. To find the minimum, keep moving to the left child until no left child exists.
3. To find the maximum, keep moving to the right child until no right child exists.
4. Display both values.

## Concepts Used
- Binary Search Tree
- Insertion
- Iteration
- Tree traversal

## Complexity Analysis
- Average time complexity: O(log n) in a balanced BST.
- Worst-case time complexity: O(n) in a skewed BST.
- Auxiliary space complexity for finding minimum or maximum: O(1).

## What I Learned
- How the BST property helps identify minimum and maximum values.
- How to traverse left and right branches iteratively.
- How tree shape affects algorithm performance.
