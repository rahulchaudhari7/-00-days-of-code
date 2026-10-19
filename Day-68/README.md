# Day 68 – Find the Middle Node of a Singly Linked List

## Problem
Find the middle node of a singly linked list using an efficient approach without calculating the total number of nodes first.

## Example

**Input**
```text
5
10 20 30 40 50
```

**Output**
```text
Linked list: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
Middle node: 30
```

## Approach
1. Initialize two pointers, `slow` and `fast`, at the head.
2. Move `slow` one node at a time.
3. Move `fast` two nodes at a time.
4. Stop when `fast` reaches the end of the list.
5. The `slow` pointer identifies the middle node.

For an even-sized list, this implementation returns the second middle node.

## Concepts Used
- Singly linked list
- Slow and fast pointers
- Pointer traversal
- Dynamic memory management

## Complexity Analysis
- **Time Complexity:** O(n)
- **Auxiliary Space Complexity:** O(1)

## What I Learned
I learned how the slow and fast pointer technique can find the middle node of a linked list in a single traversal.
