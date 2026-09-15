# Day 34 - Rearrange Array in Alternating Positive and Negative Numbers

## 📌 Problem

Given an array containing positive and negative numbers, rearrange the elements so that positive and negative numbers appear alternately.

## 💡 Example

### Input

1 2 -3 -4 5 -6

### Output

The alternative positive and negative elements are: 1 -3 2 -4 5 -6

## 🧠 Approach

1. Separate the positive and negative elements using pointers.
2. Store one positive and one negative element alternately in a result array.
3. Continue until either positive or negative elements are exhausted.
4. If any elements remain, add them to the result array.
5. Print the rearranged array.

## 🛠️ Concepts Used

- Arrays
- Two Pointers
- Array Traversal
- `while` Loop
- `if` Conditions
- Rearranging Elements

## ⏱️ Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

## 🎯 What I Learned

- How to rearrange positive and negative elements.
- How to use multiple pointers for array traversal.
- How to maintain an alternating arrangement.
- How to use an extra array to store the rearranged result.
