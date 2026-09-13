# Day 32 - Trapping Rain Water

## 📌 Problem

Given an array of non-negative integers representing the heights of bars, calculate how much rainwater can be trapped between the bars.

## 💡 Example

### Input

3 0 0 2 0 4

### Output

Total trapped rainwater: 10 units

## 🧠 Approach

For every position in the array:

1. Find the maximum height on the left side.
2. Find the maximum height on the right side.
3. The water level is determined by the smaller of the two maximum heights.
4. Calculate the trapped water using:
   `min(leftMax, rightMax) - currentHeight`
5. Add the trapped water to the total.
6. Repeat for every element of the array.

## 🛠️ Concepts Used

- Arrays
- Nested Loops
- `min()` Function
- `max()` Function
- Array Traversal
- Rainwater Trapping

## ⏱️ Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How rainwater can be trapped between bars.
- How to find maximum elements on both sides of an index.
- How to calculate the water level at each position.
- How to solve the problem using array traversal and nested loops.
