# Day 31 - Best Time to Buy and Sell Stock

## 📌 Problem

Given an array of stock prices where each element represents the price of a stock on a particular day, find the maximum profit that can be achieved by buying on one day and selling on a later day.

If no profit is possible, the maximum profit will be `0`.

## 💡 Example

### Input

7 1 5 3 6 4

### Best Transaction

Buy at: 1

Sell at: 6

### Output

Maximum Profit: 5

## 🧠 Approach

1. Initialize `minPrice` with `INT_MAX`.
2. Initialize `maxProfit` with `0`.
3. Traverse the array from left to right.
4. Keep updating the minimum price found so far.
5. Calculate the profit using:
   `current price - minimum price`
6. Update `maxProfit` whenever a larger profit is found.
7. After traversing the complete array, print the maximum profit.

## 🛠️ Concepts Used

- Arrays
- Array Traversal
- `min()` Function
- `max()` Function
- `INT_MAX`
- Greedy Approach
- Profit Calculation

## ⏱️ Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find the maximum profit from stock prices.
- How to track the minimum price efficiently.
- How to calculate the best possible profit in one traversal.
- How to solve the problem using constant extra space.
- How a greedy approach can optimize an array problem.

## 🚀 Progress

**Day 31 / 100 ✅**

Keep Coding. Keep Learning. Keep Improving. 🔥
