# Day 69 – Detect a Loop in a Singly Linked List

## Problem
Determine whether a singly linked list contains a loop. A loop exists when a node points back to an earlier node instead of pointing to `NULL`.

## Example

**Input**
```text
Number of nodes: 4
Node values: 10 20 30 40
Loop position: 2
```

**Output**
```text
Loop detected!
```

## Approach
1. Initialize two pointers, `slow` and `fast`, at the head.
2. Move the slow pointer one step at a time.
3. Move the fast pointer two steps at a time.
4. If both pointers meet, a loop exists.
5. If the fast pointer reaches `NULL`, no loop exists.

The program allows the user to create a loop by specifying a node position. Enter `0` to keep the list without a loop.

## Concepts Used
- Singly linked lists
- Pointers
- Floyd's Cycle Detection Algorithm
- Dynamic memory management

## Complexity Analysis
- **Time Complexity:** O(n)
- **Auxiliary Space Complexity:** O(1)

## What I Learned
I learned how to detect a loop in a linked list using the slow and fast pointer technique without using additional data structures.
