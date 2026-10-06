# Day 55 – Find the Longest Word

## Problem

Given a sentence, find the word with the maximum number of characters.

## Example

### Input

I am learning programming

### Output

Longest word: programming

Length: 11

## Explanation

The sentence contains four words:

* I → 1 character
* am → 2 characters
* learning → 8 characters
* programming → 11 characters

Since "programming" has the maximum length, it is the longest word.

## Approach

1. Read the complete sentence using `getline()`.
2. Traverse the sentence character by character.
3. Build each word until a space is encountered.
4. Compare the length of the current word with the longest word.
5. Update the longest word whenever a longer word is found.
6. Display the longest word and its length.

## Concepts Used

* Strings
* String Traversal
* `getline()`
* Loops
* Conditional Statements
* Word Processing

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

## What I Learned

* How to process words from a complete sentence.
* How to compare string lengths.
* How to find the longest word efficiently.
* How `getline()` can be used for sentence input.
