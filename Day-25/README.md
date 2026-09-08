# Day 25 - Find Pair With Given Sum

## 📌 Problem

Given an array and a target sum, find a pair of elements whose sum is equal to the target.

If a pair is found, print the pair. Otherwise, print that no pair exists.

## 💡 Example

### Input

Array: 10 9 5 4

Target: 13

### Output

Pair found: (9, 4)

## 🧠 Approach

1. Traverse the array using an outer loop.
2. Use a second loop to check the elements after the current element.
3. Add the two selected elements.
4. If their sum is equal to the target, print the pair.
5. Stop the program after finding the first valid pair.
6. If no pair is found, print "No pair found".

## 🛠️ Concepts Used

- Arrays
- Nested Loops
- Array Traversal
- Conditional Statements
- Pair Searching
- `return`

## ⏱️ Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find a pair with a given sum.
- How to use nested loops for pair searching.
- How to avoid comparing the same pair twice.
- How to stop the program when the required pair is found.

