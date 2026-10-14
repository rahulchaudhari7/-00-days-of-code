# Day 63 – Implement a Circular Queue in C++

## Problem
Implement a circular queue using an array with enqueue, dequeue, and display operations.

## Example
**Operations:**
- Enqueue 10
- Enqueue 20
- Enqueue 30
- Dequeue
- Enqueue 40

**Output:**
```text
Queue: 20 30 40
```

## Explanation
A circular queue connects the last array position logically to the first position. It reuses available space instead of wasting positions freed by dequeue operations.

## Approach
- Initialize front and rear indices.
- Insert elements by updating the rear index using modulo.
- Remove elements by advancing the front index.
- Track the number of stored elements to detect full and empty states.
- Display elements in FIFO order.

## Concepts Used
- Queue
- Circular array
- Modulo operator
- Classes and objects
- Dynamic memory allocation

## Complexity
- **Enqueue:** O(1)
- **Dequeue:** O(1)
- **Display:** O(n)
- **Space Complexity:** O(n)

Here, `n` represents the queue capacity for space complexity.

## What I Learned
I learned how circular indexing works and how a circular queue reuses array space efficiently.

## 100 Days of Code
Day 63 completed! Continuing to improve my C++ and data structures skills through daily practice.
