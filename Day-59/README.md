# Day 59 – Check if One String Is a Rotation of Another

## Problem

Given two strings, determine whether the second string is a rotation of the first string.

A string is a rotation of another string if its characters can be shifted from the beginning to the end without changing their relative order.

## Example

### Input

String 1 = "abcd"

String 2 = "cdab"

### Output

Strings are rotations

## Explanation

Concatenate the first string with itself:

"abcd" + "abcd" = "abcdabcd"

The second string, "cdab", is present in the combined string. Therefore, the two strings are rotations of each other.

## Approach

1. Take two strings as input.
2. Check whether their lengths are equal.
3. If their lengths differ, they cannot be rotations.
4. Concatenate the first string with itself.
5. Search for the second string in the combined string.
6. If it is found, the strings are rotations; otherwise, they are not.

## Concepts Used

- Strings
- String Concatenation
- String Searching
- Conditional Statements
- `find()`
- `string::npos`

## Complexity

- Time Complexity: Depends on the string-searching implementation; commonly O(n) with an efficient search algorithm.
- Space Complexity: O(n)

## What I Learned

- How string rotations work.
- How concatenation can simplify string problems.
- How to search for a substring using `find()`.
- How to check string lengths before comparing strings.
