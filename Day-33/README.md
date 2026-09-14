# Day 33 - Find Missing and Repeating Number

## 📌 Problem

Given an array containing numbers from `1` to `n`, find the number that is repeated and the number that is missing.

The array contains exactly one repeating number and one missing number.

## 💡 Example

### Input

1 2 2 4 5

### Output

Repeating number: 2
Missing number: 3

## 🧠 Approach

1. Traverse the array and compare each element with the elements after it.
2. If two elements are equal, store that element as the repeating number.
3. Then check every number from `1` to `n`.
4. Search for each number in the array.
5. If a number is not found, store it as the missing number.
6. Print both the repeating and missing numbers.

## 🛠️ Concepts Used

- Arrays
- Nested Loops
- Array Traversal
- Searching
- Boolean Variables
- Conditional Statements
- `break`

## ⏱️ Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find a repeating element in an array.
- How to identify a missing number.
- How nested loops can be used for searching.
- How to track results using variables.
- How to solve array problems without using extra data structures.
