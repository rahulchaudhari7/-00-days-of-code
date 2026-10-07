# Day 56 – First Missing Positive Number

## Problem

Given an array of integers, find the smallest positive integer that is missing from the array.

## Example

### Input

Array = {3, 4, -1, 1}

### Output

First missing positive number: 2

## Explanation

We need to find the smallest positive number that is not present in the array.

For the given array:

* `1` is present.
* `2` is missing.

Therefore, the first missing positive number is `2`.

Negative numbers and zero are ignored because we are only looking for positive integers.

## Approach

1. Start checking positive integers from `1`.
2. Search for the current positive number in the array.
3. If the number is found, move to the next positive number.
4. If the number is not found, it is the first missing positive number.
5. Display the result.

## Concepts Used

* Arrays
* Linear Search
* Loops
* Conditional Statements
* Positive Number Checking

## Complexity

* Time Complexity: O(n²)
* Space Complexity: O(1)

## What I Learned

* How to find the smallest missing positive integer.
* How to ignore negative numbers and zero.
* How linear search can be used to check the presence of elements.
* How to solve array-based problems using simple loops and conditions.

## 100 Days of Code

Day 56 / 100 🚀

Consistency over perfection. 💻🔥
