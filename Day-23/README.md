# Day 23 - Find Repeating Elements in an Array

## 📌 Problem

Given an array, find and print all the elements that occur more than once.

Each repeating element should be printed only once.

## 💡 Example

### Input

1 2 3 4 2 5 6 3 7

### Output

Repeating elements are: 2 3

## 🧠 Approach

1. Traverse the array using the outer loop.
2. For every element, check all the previous elements.
3. If the current element has already appeared, mark it as repeated.
4. Print the element when a duplicate occurrence is found.
5. Continue until the complete array is checked.

## 🛠️ Concepts Used

- Arrays
- Nested Loops
- Array Traversal
- Boolean Variables
- `break`
- Duplicate Handling

## ⏱️ Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find repeating elements in an array.
- How to compare the current element with previous elements.
- How to handle duplicate values without using extra data structures.
- How nested loops can be used for array problems.
