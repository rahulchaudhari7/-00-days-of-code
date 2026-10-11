# Day 60 – Balanced Parentheses Checker

## Problem
Check whether a string containing parentheses, curly braces, and square brackets is balanced.

## Example
**Input:**
```text
{[()]}
```

**Output:**
```text
Brackets are balanced
```

## Explanation
Brackets are balanced when every opening bracket has a matching closing bracket in the correct order.

For example, `{[()]}` is balanced, but `{[(])}` is not.

## Approach
- Use a stack to store opening brackets.
- Push opening brackets onto the stack.
- For each closing bracket, check whether it matches the top opening bracket.
- Pop the matching bracket.
- If a mismatch occurs, or opening brackets remain at the end, the brackets are not balanced.

## Concepts Used
- Stack
- Strings
- Conditional statements
- Loops

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

Here, `n` is the length of the input string.

## What I Learned
I learned how to use a stack to match opening and closing brackets and check their order.

