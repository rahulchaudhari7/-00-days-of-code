# Day 38 – Smallest Positive Missing Number

## 📌 Problem

Given an array containing positive, negative, and zero values, find the **smallest positive number that is missing** from the array.

### Example

**Input:**

```text
3 4 -1 1
```

**Output:**

```text
Smallest positive missing number: 2
```

### Explanation

The positive numbers present in the array are:

```text
1 3 4
```

The smallest positive number is `1`, but it is present.

The next positive number is `2`, which is missing.

Therefore:

```text
Smallest positive missing number = 2
```

---

## 💡 Approach

1. Start with `missing = 1`.
2. Traverse the array to check whether `missing` exists.
3. If it is found, increment `missing`.
4. Repeat the process until a number is not found.
5. The first missing positive number is the answer.

---

## 🧠 Concepts Used

* Arrays
* Array Traversal
* Nested Loops
* `while` Loop
* Boolean Variables
* Conditional Statements
* Searching

---

## ⏱️ Complexity

* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(1)`

For each positive number, the complete array may be searched.

---

## 📚 What I Learned

* How to find the smallest missing positive number.
* How to search for elements inside an array.
* How nested loops can be used to solve array problems.
* Improved understanding of positive and negative array elements.
