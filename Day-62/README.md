# Day 62 – Implement a Queue Using Two Stacks

## Problem
Implement a queue using two stacks and support enqueue, dequeue, and display operations.

## Example
**Operations:**
- Enqueue 10
- Enqueue 20
- Dequeue

**Output:**
```text
Removed: 10
```

## Explanation
A queue follows FIFO (First In, First Out), while a stack follows LIFO (Last In, First Out). Two stacks can be used together to implement queue behaviour.

## Approach
- Use the first stack (`s1`) to insert new elements.
- When removing an element, transfer elements to the second stack (`s2`) if it is empty.
- Pop from `s2` to remove the oldest element.
- Display the elements from front to rear.

## Concepts Used
- Stack
- Queue
- Classes and objects
- Menu-driven programming

## Complexity
- **Enqueue:** O(1)
- **Dequeue:** Amortized O(1), worst-case O(n)
- **Display:** O(n)
- **Space Complexity:** O(n)

## What I Learned
I learned how two stacks can be combined to implement a queue and how FIFO behaviour can be achieved using LIFO data structures.
