# Day 74 - Binary Tree Level Order Traversal in C++

## 📌 Aim
To implement Level Order Traversal of a Binary Tree using Breadth-First Search (BFS) in C++.

## 🎯 Objective
- To understand the structure of a Binary Tree.
- To implement Breadth-First Search (BFS).
- To use a Queue to traverse tree nodes level by level.
- To analyze the time and space complexity of the algorithm.

## 📖 Theory
Level Order Traversal is a tree traversal technique in which nodes are visited level by level, starting from the root node.

It uses a Queue data structure that follows the FIFO (First In, First Out) principle.

### Algorithm
1. Check whether the root node is NULL. If it is, return.
2. Create a queue and insert the root node.
3. While the queue is not empty:
   - Remove the front node from the queue.
   - Print its data.
   - Insert its left child if it exists.
   - Insert its right child if it exists.
4. Repeat until the queue becomes empty.

## 💻 Example

**Input Tree:**
```text
        1
       / \
      2   3
     / \
    4   5
```

**Output:**
```text
Level Order Traversal: 1 2 3 4 5
```

## ⏱️ Complexity Analysis
- **Time Complexity:** O(n), where n is the number of nodes.
- **Space Complexity:** O(n) in the worst case due to the queue.

## 🛠️ Technologies Used
- Language: C++
- Data Structure: Binary Tree, Queue
- Algorithm: Breadth-First Search (BFS)

## 📚 Learning Outcomes
- Learned how to traverse a binary tree level by level.
- Understood the role of queues in BFS.
- Practiced implementing tree algorithms in C++.
- Learned to analyze algorithm complexity.

## ✅ Conclusion
Level Order Traversal efficiently visits every node of a binary tree level by level using a queue and the BFS technique.
