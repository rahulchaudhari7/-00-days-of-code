
# Day 83 - Valid Parentheses

## Problem
Given a string containing '(', ')', '{', '}', '[' and ']', determine whether the input string has valid parentheses.

A string is valid if:
- Every opening bracket has a corresponding closing bracket.
- Brackets are closed in the correct order.
- Every closing bracket matches the most recent unmatched opening bracket.

## Approach
- Use a Stack data structure.
- Push every opening bracket into the stack.
- For every closing bracket, check whether the stack is empty.
- Pop the top element and verify whether it matches the closing bracket.
- If the stack is empty at the end, the string is valid.

## Code
Implemented using C++ and Stack.

## Example

**Input:**
```text
{[()]}
```

**Output:**
```text
Valid Parentheses
```

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(n)

## Concepts Learned
- Stack Data Structure
- LIFO Principle
- Push and Pop Operations
- Balanced Parentheses
- String Traversal

## Language
C++

---
