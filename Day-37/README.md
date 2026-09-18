# Day 37 – Maximum Difference Between Two Elements

## 📌 Problem

Given an array, find the **maximum difference** between two elements such that the larger element appears **after** the smaller element.

In other words, find the maximum value of:

```text
arr[j] - arr[i]
```

where:

```text
j > i
```

### Example

**Input:**

```text
2 3 10 6 4 8 1
```

**Output:**

```text
Maximum difference is: 8
```

### Explanation

The maximum valid difference is:

```text
10 - 2 = 8
```

Here, `2` appears before `10`, so the condition `j > i` is satisfied.

---

## 💡 Approach

1. Consider the first element as the minimum element.
2. Traverse the array from the second element.
3. Calculate the difference between the current element and the minimum element.
4. Update the maximum difference if the current difference is greater.
5. Update the minimum element whenever a smaller element is found.
6. Continue until the end of the array.

This ensures that the smaller element always appears **before** the larger element.

---

## 🧠 Concepts Used

* Arrays
* Array Traversal
* Loops
* Conditional Statements
* Minimum Element
* Maximum Difference
* Time and Space Complexity

---

## ⏱️ Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

The array is traversed only once, making the solution efficient.

---

## 📚 What I Learned

* How to find the maximum difference while maintaining the correct array order.
* How to track the minimum element during traversal.
* Understanding the importance of the condition `j > i`.
* Improved my understanding of single-pass array algorithms.
