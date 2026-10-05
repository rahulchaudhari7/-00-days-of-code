# Day 54 – Reverse Words in a String

## Problem

Given a sentence, reverse the order of the words while keeping the characters of each word unchanged.

## Example

### Input

I love coding

### Output

coding love I

## Explanation

The words in the sentence are:

I → love → coding

We reverse their order:

coding → love → I

The characters inside each word remain unchanged.

## Approach

1. Read the complete sentence.
2. Extract each word from the sentence.
3. Store the words in reverse order.
4. Continue until all words are processed.
5. Display the reversed sentence.

## Concepts Used

* Strings
* String Traversal
* Words
* Loops
* Conditional Statements

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

## What I Learned

* How to read a complete sentence using `getline()`.
* How to separate words from a string.
* How to reverse the order of words.
* How string traversal can be used to solve text-based problems.
