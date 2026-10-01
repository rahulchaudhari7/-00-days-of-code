# Day 50 – Merge Two Sorted Arrays

## Problem

Given two sorted arrays, merge them into a single sorted array while maintaining the sorted order.

## Example

### Input

Array 1 = `{1, 3, 5, 7}`
Array 2 = `{2, 4, 6, 8}`

### Output

```text
1 2 3 4 5 6 7 8
```

## Explanation

Both arrays are already sorted.

We compare the elements from both arrays one by one and select the smaller element each time.

The elements are merged in this order:

```text
1 → 2 → 3 → 4 → 5 → 6 → 7 → 8
```

The final result is a single sorted array.

## Approach

1. Maintain one pointer for each sorted array.
2. Compare the elements pointed to by both pointers.
3. Add the smaller element to the result.
4. Move the pointer of the selected element forward.
5. Continue until one array is completely traversed.
6. Add the remaining elements of the other array.
7. Print the merged sorted array.

## Concepts Used

* Arrays
* Two Pointer Technique
* Array Traversal
* Comparison
* Merging

## Complexity

* **Time Complexity:** `O(n + m)`
* **Space Complexity:** `O(n + m)`

## What I Learned

Today I learned how to merge two already sorted arrays using the two-pointer technique. I understood how comparing elements from both arrays can produce a sorted result efficiently without sorting the complete array again.

