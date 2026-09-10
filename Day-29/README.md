# Day 29 - Maximum Subarray Sum

## 📌 Problem

Given an array of integers, find the maximum possible sum of a contiguous subarray.

A contiguous subarray contains elements that are next to each other in the original array.

## 💡 Example

### Input

-2 1 -3 4 -1 2 1 -5 4

### Maximum Subarray

4 -1 2 1

### Output

Maximum subarray sum is: 6

## 🧠 Approach

This problem is solved using **Kadane's Algorithm**.

1. Start with the first element as the current sum and maximum sum.
2. Traverse the array from the second element.
3. For each element, decide whether to:
   - Start a new subarray from the current element, or
   - Add the current element to the existing subarray.
4. Update the current sum.
5. Keep track of the maximum sum found so far.
6. Continue until the complete array is traversed.

## 🛠️ Concepts Used

- Arrays
- Subarrays
- Array Traversal
- Kadane's Algorithm
- Conditional Logic
- Maximum Value Tracking

## ⏱️ Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find the maximum sum of a contiguous subarray.
- How Kadane's Algorithm works.
- How to solve an array problem efficiently in O(n) time.
- How to maintain and update a running sum.
