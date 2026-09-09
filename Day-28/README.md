# Day 28 - Find the Majority Element

## 📌 Problem

Given an array, find the element that appears more than `n/2` times.

If no element appears more than `n/2` times, print that no majority element exists.

## 💡 Example

### Input

1 1 2 2 2

### Output

The majority element is: 2

## 🧠 Approach

This problem is solved using the **Boyer-Moore Voting Algorithm**.

1. Initialize a candidate element and a count.
2. Traverse the array.
3. If the count becomes `0`, select the current element as the new candidate.
4. If the current element is equal to the candidate, increase the count.
5. Otherwise, decrease the count.
6. After the first traversal, the candidate is considered the possible majority element.
7. Traverse the array again to count its actual occurrences.
8. If its count is greater than `n/2`, it is the majority element.
9. Otherwise, no majority element exists.

## 🛠️ Concepts Used

- Arrays
- Array Traversal
- Boyer-Moore Voting Algorithm
- Counting
- Conditional Statements
- Candidate Selection

## ⏱️ Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find a majority element efficiently.
- How the Boyer-Moore Voting Algorithm works.
- How to reduce time complexity from O(n²) to O(n).
- Why verification is important after finding a possible candidate.
- How to solve the problem without using extra data structures.

## 🚀 Progress

**Day 28 / 100 ✅**

Keep Coding. Keep Learning. Keep Improving. 🔥
