# Day 24 - Find Leaders in an Array

## 📌 Problem

Given an array, find all the leader elements.

An element is called a **leader** if there is no element greater than it on its right side.

The last element of the array is always a leader.

## 💡 Example

### Input

10 9 11 8 7 6 5 4 3 2 1

### Output

Leaders in the array are: 1 2 3 4 5 6 7 8 11

## 🧠 Approach

1. Start traversing the array from the right side.
2. Consider the last element as the first leader.
3. Keep track of the maximum element found so far.
4. If the current element is greater than the maximum element, it is a leader.
5. Print the leader and update the maximum element.
6. Continue until the beginning of the array is reached.

## 🛠️ Concepts Used

- Arrays
- Array Traversal
- Reverse Traversal
- Conditional Statements
- Comparison
- Maximum Element Tracking

## ⏱️ Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to identify leader elements in an array.
- Why traversing from right to left makes this problem easier.
- How to keep track of the maximum element.
- How to solve an array problem efficiently without extra space.
