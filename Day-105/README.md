# Day 105 – Min Heap Operations

## Problem

Insert values into a Min Heap, print the heap, remove the minimum value, and print the heap again.

A Min Heap stores the smallest value at its root. Each parent is less than or equal to its children.

## Example

Input:

```text
6
10 4 15 2 8 20
```

Output:

```text
Min Heap: 2 4 15 10 8 20
Extracted minimum: 2
Heap after extraction: 4 8 15 10 20
```

## Approach

1. Store heap values in an array.
2. Insert each value at the end and move it upward until heap order is restored.
3. To remove the minimum, replace the root with the last value.
4. Move the new root downward until heap order is restored.

## Complexity Analysis

- Insert: O(log n)
- Extract minimum: O(log n)
- Space Complexity: O(n)

Here, `n` is the number of values in the heap.

## Concepts Used

- Min Heap
- Arrays
- Heapify Up
- Heapify Down
- Priority Queue Concepts

## What I Learned

An array can represent a complete binary tree efficiently, and the heap property can be restored with upward or downward swaps.
