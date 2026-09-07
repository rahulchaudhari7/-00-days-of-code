# Day 26 - Common Elements in Three Sorted Arrays

## 📌 Problem

Given three sorted arrays, find the elements that are common in all three arrays.

## 💡 Example

### Array 1

1 2 3 40 50 60 70

### Array 2

10 20 30 40 50

### Array 3

40 50 60 70 80

### Output

Common elements: 40 50

## 🧠 Approach

Since all three arrays are sorted, three pointers are used:

1. Initialize three pointers `i`, `j`, and `k` at the beginning of the arrays.
2. Compare the elements at the three pointers.
3. If all three elements are equal, the element is common to all arrays.
4. Print the common element and move all three pointers forward.
5. If `arr1[i]` is smaller, move `i`.
6. Otherwise, compare the other elements and move the pointer containing the smallest value.
7. Continue until one of the arrays is completely traversed.

## 🛠️ Concepts Used

- Arrays
- Sorted Arrays
- Three Pointer Technique
- `while` Loop
- Conditional Statements
- Efficient Array Traversal

## ⏱️ Complexity

- **Time Complexity:** O(n1 + n2 + n3)
- **Space Complexity:** O(1)

## 🎯 What I Learned

- How to find common elements in three arrays.
- How sorted arrays can make searching more efficient.
- How to use multiple pointers for array problems.
- How to reduce unnecessary comparisons.

## 🚀 Progress

**Day 26 / 100 ✅**

Keep Coding. Keep Learning. Keep Improving. 🔥
