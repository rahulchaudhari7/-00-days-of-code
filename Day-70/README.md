# Day 70 – Remove Duplicates from a Sorted Linked List

## Problem
Given a sorted singly linked list, remove duplicate nodes so that each value appears only once.

## Example

**Input**
```text
7
10 10 20 30 30 30 40
```

**Output**
```text
Original list: 10 -> 10 -> 20 -> 30 -> 30 -> 30 -> 40 -> NULL
List after removing duplicates: 10 -> 20 -> 30 -> 40 -> NULL
```

## Approach
1. Start at the head of the linked list.
2. Compare the current node with the next node.
3. If both values are equal, unlink and delete the next node.
4. Otherwise, move to the next node.
5. Continue until the end of the list.

## Concepts Used
- Singly linked lists
- Pointer manipulation
- Dynamic memory management
- Duplicate removal

## Complexity Analysis
- **Time Complexity:** O(n)
- **Auxiliary Space Complexity:** O(1)

## What I Learned
I learned how to remove duplicate nodes from a sorted linked list in place using pointer manipulation and dynamic memory deallocation
