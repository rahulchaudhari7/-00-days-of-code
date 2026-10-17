# Day 66 – Delete a Node from a Singly Linked List

## Problem
Implement a singly linked list and delete the first node containing a specified value.

## Example

**Input:**
```text
4
10 20 30 40
30
```

**Output:**
```text
Linked List: 10 -> 20 -> 40 -> NULL
```

## Explanation
A singly linked list consists of nodes connected through pointers. To delete a node, update the previous node's pointer to skip the target node, then release the target node's memory.

## Approach
1. Create a singly linked list using dynamic memory allocation.
2. Traverse the list to locate the target value.
3. Handle deletion separately if the target is the head node.
4. Update the links to skip the target node.
5. Delete the target node and display the updated list.

## Concepts Used
- Singly Linked List
- Pointers
- Node deletion
- Dynamic memory management
- Traversal

## Complexity Analysis
- **Deletion:** O(n) in the worst case
- **Display:** O(n)
- **Space Complexity:** O(n) for the linked list

## What I Learned
I learned how to delete a node from a singly linked list, update pointers correctly, handle head-node deletion, and release dynamically allocated memory.
