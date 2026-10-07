# Day 56 – Find Common Characters in Two Strings

## Problem

Given two strings, find the characters that are present in both strings.

## Example

### Input

String 1 = "apple"

String 2 = "grape"

### Output

Common characters: a e p

## Explanation

We check the characters present in both strings.

For the given strings:

* `a` is present in both.
* `e` is present in both.
* `p` is present in both.

Therefore, the common characters are `a`, `e`, and `p`.

## Approach

1. Take two strings as input.
2. Create frequency arrays for both strings.
3. Count the frequency of each character in the first string.
4. Count the frequency of each character in the second string.
5. Traverse the character range.
6. If a character is present in both strings, display it.

## Concepts Used

* Strings
* Character Frequency
* Arrays
* Loops
* Conditional Statements

## Complexity

* Time Complexity: O(n + m)
* Space Complexity: O(1)

## What I Learned

* How to compare characters between two strings.
* How frequency arrays can be used for string problems.
* How to find common elements efficiently.
* How character frequency helps in solving comparison problems.
