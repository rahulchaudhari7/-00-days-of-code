# Day 52 – Check Anagram

## Problem

Given two strings, check whether they are anagrams of each other.

Two strings are anagrams if they contain the same characters with the same frequencies, but their order can be different.

## Example

### Input

String 1 = "listen"

String 2 = "silent"

### Output

The strings are anagrams

## Explanation

The two strings contain exactly the same characters:

* l
* i
* s
* t
* e
* n

Although their order is different, the frequency of every character is the same. Therefore, the strings are anagrams.

## Approach

1. First compare the lengths of both strings.
2. If their lengths are different, they cannot be anagrams.
3. Create a frequency array for the 26 lowercase English letters.
4. Increase the count for characters of the first string.
5. Decrease the count for characters of the second string.
6. Check the frequency array.
7. If every frequency becomes zero, the strings are anagrams.

## Concepts Used

* Strings
* Arrays
* Character Frequency
* Loops
* Conditional Statements

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## What I Learned

* How to check whether two strings are anagrams.
* How character frequency can be stored using an array.
* How frequency counting can solve string problems efficiently.
* How to compare two strings without sorting them.

