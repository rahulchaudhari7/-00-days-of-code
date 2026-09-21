# Day 40 – Maximum Product Subarray

## 📌 Problem

Given an integer array, find the **maximum product of a contiguous subarray**.

### Example

**Input:**

```text id="l5e9f2"
2 3 -2 4
```

**Output:**

```text id="y5q8m2"
Maximum product subarray: 6
```

### Explanation

The contiguous subarray with the maximum product is:

```text id="p8q3vn"
2 × 3 = 6
```

Therefore, the maximum product is `6`.

Negative numbers can also affect the result. For example:

```text id="j1a7qk"
-2 × -3 = 6
```

So negative values cannot simply be ignored.

---

## 💡 Approach

1. Start from every index of the array.
2. Initialize `product = 1`.
3. Traverse the array from the current index.
4. Multiply each element with the current product.
5. Compare the current product with `maxProduct`.
6. Update `maxProduct` whenever a larger product is found.
7. Continue until all contiguous subarrays have been checked.

---

## 🧠 Concepts Used

* Arrays
* Subarrays
* Nested Loops
* Running Product
* Array Traversal
* Conditional Statements
* Negative Numbers

---

## ⏱️ Complexity

* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(1)`

The nested loops check all possible contiguous subarrays.

---

## 📚 What I Learned

* How to find the maximum product of a contiguous subarray.
* How negative numbers can change the product.
* How to maintain a running product.
* How nested loops can be used to generate and evaluate subarrays.
* Improved understanding of array and subarray problems.

