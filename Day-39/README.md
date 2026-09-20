# Day 39 – Longest Subarray With Sum 0

## 📌 Problem

Given an array containing positive, negative, and zero values, find the **length of the longest subarray whose sum is equal to 0**.

### Example

**Input:**

```text
15 -2 2 -8 1 7 10 23
```

**Output:**

```text
Longest subarray with sum 0: 5
```

### Explanation

The longest subarray with sum `0` is:

```text
-2 + 2 - 8 + 1 + 7 = 0
```

Its length is:

```text
5
```

---

## 💡 Approach

1. Start from each index of the array.
2. Initialize `sum = 0`.
3. Traverse the remaining elements from that index.
4. Add each element to `sum`.
5. Whenever `sum == 0`, calculate the current subarray length.
6. Update `maxLength` if the current length is greater.
7. Continue until all possible subarrays are checked.

---

## 🧠 Concepts Used

* Arrays
* Nested Loops
* Subarrays
* Running Sum
* Conditional Statements
* Array Traversal

---

## ⏱️ Complexity

* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(1)`

The nested loops check all possible subarrays.

---

## 📚 What I Learned

* How to find subarrays with a given sum.
* How to maintain a running sum.
* How to calculate subarray length using indices.
* How nested loops can be used to check different subarrays.
* Improved understanding of array-based problem solving.
