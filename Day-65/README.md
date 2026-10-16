# Day 65 – Singly Linked List in C++

## Problem
Implement a singly linked list that allows users to insert nodes at the end and display all node values.

## Example

**Input:**
```text
4
10 20 30 40
```

**Output:**
```text
Linked List: 10 -> 20 -> 30 -> 40 -> NULL
```

## Explanation
A singly linked list is a linear data structure made up of nodes. Each node stores data and a pointer to the next node. The last node points to `NULL`.

## Approach
1. Define a node containing data and a next pointer.
2. Maintain a head pointer to the first node.
3. Create a new node for each input value.
4. Traverse to the last node and link the new node.
5. Traverse from the head to display the list.

## Concepts Used
- Singly Linked List
- Structures and pointers
- Dynamic memory allocation
- Traversal
- Constructors and destructors

## Complexity Analysis
- **Insertion at End:** O(n) per insertion
- **Display:** O(n)
- **Space Complexity:** O(n)

## What I Learned
I learned how linked-list nodes are connected through pointers, how to insert nodes dynamically, and how to traverse a linked list.

