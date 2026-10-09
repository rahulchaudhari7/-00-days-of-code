# Day 58 – String Compression

## Problem

Given a string, compress consecutive repeating characters by writing each character followed by its count.

## Example

### Input

aaabbccccd

### Output

a3b2c4d1

## Explanation

The input string contains consecutive groups of repeated characters.

* `aaa` becomes `a3`
* `bb` becomes `b2`
* `cccc` becomes `c4`
* `d` becomes `d1`

Combining these groups produces the compressed string `a3b2c4d1`.

## Approach

1. Take a string as input.
2. Initialize a counter to 1.
3. Traverse the string and compare each character with the previous character.
4. If both characters are equal, increase the counter.
5. Otherwise, append the previous character and its count to the result.
6. Reset the counter for the next group.
7. Process the final group and display the compressed string.

## Concepts Used

* Strings
* Character Traversal
* Consecutive Characters
* Counting
* Loops
* String Manipulation

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

## What I Learned

* How to identify consecutive repeating characters.
* How to count character occurrences within consecutive groups.
* How to build a compressed string.
* How to solve string manipulation problems using a single traversal.
