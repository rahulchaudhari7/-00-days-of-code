# Day 61 – Evaluate a Postfix Expression Using Stack

## Problem
Evaluate a postfix mathematical expression containing integers and the operators `+`, `-`, `*`, and `/`.

## Example
**Input:**
```text
5 3 + 2 *
```

**Output:**
```text
Result: 16
```

## Explanation
In postfix notation, operators appear after their operands. The expression `5 3 + 2 *` is evaluated as `(5 + 3) * 2`, giving the result `16`.

## Approach
- Read the expression as space-separated tokens.
- Push each integer onto the stack.
- When an operator appears, pop the top two operands.
- Perform the operation in the correct order and push the result back.
- At the end, exactly one value should remain on the stack.

## Concepts Used
- Stack
- Postfix notation
- String processing
- Arithmetic operators

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

Here, `n` is the number of tokens in the expression.

## What I Learned
I learned how a stack can evaluate postfix expressions and why operand order matters for subtraction and division.
