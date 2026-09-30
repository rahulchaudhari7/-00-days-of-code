# Day 49 – Count Pairs with Difference K

## Problem

Given an array of integers and an integer `K`, count the number of pairs whose absolute difference is equal to `K`.

## Example

### Input

Array = {1, 5, 3, 4, 2}  
K = 2

### Output

Number of pairs: 3

## Explanation

We check every possible pair in the array.

Valid pairs are:

- (1, 3) → |1 - 3| = 2
- (5, 3) → |5 - 3| = 2
- (4, 2) → |4 - 2| = 2

Therefore, the total number of valid pairs is 3.

## Approach

1. Traverse the array using two loops.
2. Compare every unique pair of elements.
3. Calculate the absolute difference between the two elements.
4. If the difference is equal to `K`, increase the count.
5. Print the total number of valid pairs.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1)

## Concepts Used

- Arrays
- Nested Loops
- Pair Checking
- Absolute Difference
- Conditional Statements

## What I Learned

Today I learned how to find and count pairs whose absolute difference is equal to a given value `K`. I also practiced checking unique pairs using nested loops.
