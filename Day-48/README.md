# Day 48 – Find the Peak Element

## Problem

Given an array, find a **peak element**.

A peak element is an element that is greater than its neighboring elements.

For the first and last elements, only the existing neighbor is considered.

## Example

### Input

```text
1 3 20 4 1 0
```

### Output

```text
Peak element: 20
```

## Explanation

For the given array:

```text
1 3 20 4 1 0
```

The element `20` is greater than both of its neighbors:

```text
3 < 20 > 4
```

Therefore, `20` is a peak element.

## Approach

1. Traverse the array from left to right.
2. If the element is the first element, compare it with the next element.
3. If the element is the last element, compare it with the previous element.
4. For middle elements, compare them with both neighboring elements.
5. If an element is greater than its required neighbors, consider it a peak and stop the search.

## C++ Code

```cpp
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = -1;

    for(int i = 0; i < n; i++){

        // First element
        if(i == 0){
            if(arr[i] > arr[i + 1]){
                peak = arr[i];
                break;
            }
        }

        // Last element
        else if(i == n - 1){
            if(arr[i] > arr[i - 1]){
                peak = arr[i];
                break;
            }
        }

        // Middle elements
        else{
            if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
                peak = arr[i];
                break;
            }
        }
    }

    if(peak != -1)
        cout << "Peak element: " << peak;
    else
        cout << "No peak element found";

    return 0;
}
```

## Output

```text
Peak element: 20
```

## Concepts Used

* Arrays
* Array Traversal
* Conditional Statements
* Comparison Operators
* Neighbor Element Checking

## Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

## What I Learned

Today I learned how to identify a peak element in an array by comparing each element with its neighboring elements. I also learned how to handle the first and last elements separately.
