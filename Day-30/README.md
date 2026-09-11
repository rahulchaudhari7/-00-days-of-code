# Day 30 - Longest Consecutive Sequence

## 📌 Problem

Given an unsorted array of integers, find the length of the longest sequence of consecutive elements.

The elements do not need to be next to each other in the original array.

## 💡 Example

### Input

100 4 200 1 2 3

### Longest Consecutive Sequence

1 2 3 4

### Output

4

## 🧠 Approach

1. Traverse every element of the array.
2. Consider the current element as the starting number of a sequence.
3. Check whether the next consecutive number exists in the array using `find()`.
4. If the next number exists, increase the current sequence length.
5. Continue until the next consecutive number is not found.
6. Compare the current sequence length with the maximum length.
7. Store the largest sequence length found.

## 🛠️ Concepts Used

- Arrays
- `find()` Function
- `while` Loop
- Array Traversal
- Consecutive Sequences
- `max()` Function
- `<algorithm>` Library

## ⏱️ Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find the longest consecutive sequence in an array.
- How to use the `find()` function to search for elements.
- How to track the length of a sequence.
- How to compare and maintain the maximum value.
- How to solve an array problem without using extra data structures.
