# Day 35 – Product of Array Except Self

## 📌 Problem

Given an array, create a new array where each element is the **product of all elements except the element at the current index**.

### Example

**Input:**

```text
1 2 3 4
```

**Output:**

```text
24 12 8 6
```

### Explanation

* For `1` → `2 × 3 × 4 = 24`
* For `2` → `1 × 3 × 4 = 12`
* For `3` → `1 × 2 × 4 = 8`
* For `4` → `1 × 2 × 3 = 6`

---

## 💡 Approach

1. Traverse each element of the array.
2. For every index, initialize `product = 1`.
3. Traverse the complete array again.
4. Skip the current index using `if(i != j)`.
5. Multiply all other elements.
6. Store the product in the result array.
7. Print the result array.

---

## 🧠 Concepts Used

* Arrays
* Nested Loops
* Array Traversal
* Conditional Statements
* Multiplication
* Result Array

---

## ⏱️ Complexity

* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(n)`

The nested loops make the solution `O(n²)` because every element is compared with every other element.

---

## 📚 What I Learned

* How to calculate products while excluding the current element.
* How nested loops can be used to solve array problems.
* How to store calculated results in a separate array.
* Improved understanding of array traversal and indexing.


#100DaysOfCode #CPlusPlus #DSA #Arrays #ProblemSolving #CodingJourney
