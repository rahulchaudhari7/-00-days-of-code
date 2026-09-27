# Day 46 – Sort an Array of 0s, 1s and 2s

## Problem

Given an array containing only `0`, `1`, and `2`, sort the array in ascending order **without using any built-in sorting function**.

## Example

### Input

```text
Array = {2, 0, 2, 1, 1, 0}
```

### Output

```text
Sorted array: 0 0 1 1 2 2
```

## Explanation

First, count the number of `0s`, `1s`, and `2s` in the array.

For the given array:

```text
0 → 2 times
1 → 2 times
2 → 2 times
```

Then rebuild the array:

```text
0 0 1 1 2 2
```

## Approach

1. Initialize three counters:

   * `count0` for `0`
   * `count1` for `1`
   * `count2` for `2`
2. Traverse the array and count each element.
3. Fill the array with all `0s`.
4. Fill the remaining positions with all `1s`.
5. Fill the remaining positions with all `2s`.
6. Print the sorted array.
## Output

```text
Sorted array: 0 0 1 1 2 2
```

## Concepts Used

* Arrays
* Counting
* Loops
* Conditional Statements
* Array Traversal

## Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

## What I Learned

Today I learned how to sort an array containing only `0`, `1`, and `2` without using a built-in sorting function. I practiced counting elements and rebuilding the array based on their frequencies.
