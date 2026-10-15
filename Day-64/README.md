# Day 64 - Valid Parentheses Using Stack in C++

## 🎯 Objective
To check whether a string contains valid and properly matched parentheses using a stack.

## 📚 Concepts Learned
- Stack data structure
- LIFO principle
- C++ STL stack
- push(), pop(), top(), empty()
- String traversal
- Time and space complexity

## 💡 Approach
Push every opening bracket onto the stack. For each closing bracket, check whether the top element is its matching opening bracket. If the brackets do not match, or the stack is empty when a closing bracket appears, the string is invalid. At the end, the stack must be empty.

## ✅ Example
**Input:** `{[()]}`

**Output:** `Valid Parentheses`

## ⏱️ Complexity
- Time Complexity: O(N)
- Space Complexity: O(N)

## 🚀 Learning Outcome
Learned how to use a stack to validate balanced parentheses in a string.
