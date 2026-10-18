# Day 67 – Reverse a Singly Linked List

## Problem
Reverse a singly linked list so that the nodes appear in the opposite order without creating a new linked list.

## Example

**Input**
```text
Number of nodes: 4
Node values: 10 20 30 40
```

**Output**
```text
Original linked list: 10 -> 20 -> 30 -> 40 -> NULL
Reversed linked list: 40 -> 30 -> 20 -> 10 -> NULL
```

## Approach
1. Initialize three pointers: `previous`, `current`, and `nextNode`.
2. Save the next node before changing the current node's link.
3. Reverse the current node's link to point to the previous node.
4. Move the pointers forward.
5. Update the head to the last processed node.

## Concepts Used
- Singly linked list
- Pointers and dynamic memory
- Iteration
- In-place reversal

## Complexity Analysis
- **Time Complexity:** O(n)
- **Auxiliary Space Complexity:** O(1)

## What I Learned
I learned how to reverse a singly linked list iteratively by changing node links in place using three pointers.
