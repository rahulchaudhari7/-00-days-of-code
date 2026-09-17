# Day 36 – Rotate Array by K Positions

## 📌 Problem

Given an array and an integer `K`, rotate the array to the **right by K positions**.

### Example

**Input:**

```text
Array: 1 2 3 4 5 6 7
K = 3
```

**Output:**

```text
5 6 7 1 2 3 4
```

### Explanation

The array is rotated to the right one position at a time:

```text
Original:   1 2 3 4 5 6 7
Rotation 1: 7 1 2 3 4 5 6
Rotation 2: 6 7 1 2 3 4 5
Rotation 3: 5 6 7 1 2 3 4
```

---

## 💡 Approach

1. Store the last element of the array.
2. Shift all elements one position to the right.
3. Place the last element at index `0`.
4. Repeat this process `K` times.
5. Use `K % n` to handle cases where `K` is greater than the array size.
6. Print the rotated array.

---

## 🧠 Concepts Used

* Arrays
* Loops
* Array Traversal
* Indexing
* Right Rotation
* Modulo Operator
* Temporary Variable

---

## ⏱️ Complexity

* **Time Complexity:** `O(n × k)`
* **Space Complexity:** `O(1)`

The array is shifted `K` times, and each shift takes `O(n)` time.

---

## 📚 What I Learned

* How to rotate an array to the right.
* How to shift array elements using loops.
* How the modulo operator helps reduce unnecessary rotations.
* Improved understanding of array indexing and element movement.

