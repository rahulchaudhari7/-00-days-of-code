# Day 51 – Stock Span Problem

## Problem

Given an array of daily stock prices, find the stock span for each day.

The stock span is the number of consecutive days before the current day, including the current day, for which the stock price was less than or equal to the current day's price.

## Example

### Input

Prices = {100, 80, 60, 70, 60, 75, 85}

### Output

Stock Span = {1, 1, 1, 2, 1, 4, 6}

## Explanation

For each day, we calculate how many consecutive previous days had a stock price less than or equal to the current price.

For example, for price 75:

Previous prices are 60, 70 and 60, which are less than or equal to 75. The price 80 is greater than 75, so we stop there.

Therefore, the span for 75 is 4, including the current day.

## Approach

1. Traverse the stock prices from left to right.
2. Use a stack to store indices of useful previous prices.
3. Remove indices whose prices are less than or equal to the current price.
4. If the stack becomes empty, the span is the current index + 1.
5. Otherwise, the span is the difference between the current index and the top index of the stack.
6. Push the current index into the stack.
7. Repeat until all stock prices are processed.

## Concepts Used

* Arrays
* Stack
* Indices
* Monotonic Stack
* Loops
* Conditional Statements

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

## What I Learned

* How the Stock Span Problem works.
* How stacks can be used to solve array problems efficiently.
* How a monotonic stack helps avoid unnecessary comparisons.
* How to calculate consecutive previous elements using indices.
