# Day 41 – First Non-Repeating Element

## 📌 Problem

Given an array, find the **first element that appears only once** in the array.

### Example

**Input:**

```text id="q1c8nv"
4 5 1 2 0 4
```

**Output:**

```text id="l9j3kx"
First non-repeating element: 5
```

### Explanation

* `4` → appears twice ❌
* `5` → appears once ✅
* `1` → appears once, but `5` comes before it

Therefore, the first non-repeating element is:

```text id="j8x4pe"
5
```

---

## 💡 Approach

1. Traverse the array from left to right.
2. For each element, count how many times it appears in the array.
3. If its count is `1`, it is a non-repeating element.
4. Store that element and stop the loop.
5. If no such element exists, print an appropriate message.

---

## 🧠 Concepts Used

* Arrays
* Nested Loops
* Frequency Counting
* Array Traversal
* Conditional Statements
* `break` Statement

---

## ⏱️ Complexity

* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(1)`

The nested loops compare each element with every other element.

---

## 📚 What I Learned

* How to identify repeating and non-repeating elements.
* How to count the frequency of an element.
* How to find the **first** element satisfying a condition.
* How the `break` statement can stop the search once the answer is found.
* Improved understanding of nested loops and array traversal.

