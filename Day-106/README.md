# Day 106 – Heap Sort

## Problem

Sort an array of integers in ascending order using Heap Sort.

## Example

Input:

```text
6
12 11 13 5 6 7
```

Output:

```text
Sorted array: 5 6 7 11 12 13
```

## Approach

1. Convert the input array into a max heap.
2. Swap the root, which is the largest value, with the last unsorted position.
3. Reduce the heap size by one.
4. Restore the max heap property with heapify.
5. Repeat until every value is sorted.

## Complexity Analysis

- Time Complexity: O(n log n)
- Space Complexity: O(1) auxiliary space

Here, `n` is the number of array values.

## Concepts Used

- Heap
- Max Heap
- Heapify
- Sorting Algorithms

## What I Learned

Heap Sort uses the largest value at the root of a max heap to place values in their final sorted positions one by one.
