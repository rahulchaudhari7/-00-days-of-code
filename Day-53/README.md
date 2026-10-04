# Day 53 – First Repeating Character

## Problem

Given a string, find the first character that appears more than once.

## Example

### Input

String = "programming"

### Output

First repeating character: r

## Explanation

We first count the frequency of every character in the string.

After storing the frequencies, we traverse the original string from left to right.

The first character whose frequency is greater than 1 is the first repeating character.

In "programming", the character 'r' appears more than once and is the first repeating character.

## Approach

1. Create a frequency array for characters.
2. Traverse the string and count every character.
3. Traverse the string again from left to right.
4. Check the frequency of each character.
5. If its frequency is greater than 1, print that character.
6. If no character repeats, display an appropriate message.

## Concepts Used

* Strings
* Character Frequency
* Arrays
* Loops
* Conditional Statements

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## What I Learned

* How to find the first repeating character in a string.
* How frequency counting works.
* How to use an array for character counting.
* How to traverse a string multiple times efficiently.
