# Day 27 - Find the Equilibrium Index

## 📌 Problem

Given an array, find the index where the sum of all elements on the left side is equal to the sum of all elements on the right side.

The current element is not included in either sum.

## 💡 Example

### Input

1 3 5 2 2

### Output

Equilibrium point found at index 2

### Explanation

At index 2, the current element is `5`.

Left side:

1 + 3 = 4

Right side:

2 + 2 = 4

Since both sums are equal, index `2` is the equilibrium index.

## 🧠 Approach

1. Calculate the total sum of all elements in the array.
2. Initialize `leftSum` as `0`.
3. Traverse the array from left to right.
4. Calculate the right sum using:
   `rightSum = totalSum - leftSum - arr[i]`
5. Compare `leftSum` and `rightSum`.
6. If both are equal, the current index is the equilibrium index.
7. Otherwise, add the current element to `leftSum` and continue.
8. If no equilibrium index is found, display an appropriate message.

## 🛠️ Concepts Used

- Arrays
- Array Traversal
- Prefix Sum Concept
- Variables
- Conditional Statements
- `for` Loop
- Boolean Variables

## ⏱️ Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find an equilibrium index in an array.
- How to calculate left and right sums efficiently.
- How to avoid using extra arrays.
- How to optimize an array problem to O(n) time.
