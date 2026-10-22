# Day 71 – Merge Two Sorted Linked Lists

## Problem
Given two sorted singly linked lists, merge them into one sorted linked list.

## Example

**Input**
```text
First list: 1 -> 3 -> 5 -> 7 -> NULL
Second list: 2 -> 4 -> 6 -> NULL
```

**Output**
```text
Merged sorted list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> NULL
```

## Approach
1. Compare the current nodes of both lists.
2. Link the smaller node to the merged list.
3. Advance the pointer of the list from which the node was selected.
4. Repeat until one list becomes empty.
5. Attach the remaining nodes to the merged list.

The algorithm reuses the original nodes instead of allocating new data nodes.

## Concepts Used
- Singly linked lists
- Pointer manipulation
- Sorted merging
- Dummy node technique

## Complexity Analysis
- **Time Complexity:** O(n + m)
- **Auxiliary Space Complexity:** O(1)

Here, n and m represent the number of nodes in the two input lists.

## What I Learned
I learned how to merge two sorted linked lists efficiently by comparing node values and adjusting pointers.
