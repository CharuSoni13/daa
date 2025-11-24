EXPERIMENT – 3
---------------
Aim:
To apply linear search and binary search algorithms to find an element in a given set of data and analyze their time complexity.

****************************************************************************************************************************************************

Theory:
-----------

Searching is the process of locating a desired element (key) within a given set of data. It plays a crucial role in various applications such as databases, information retrieval, and decision-making systems. Two widely used searching techniques are Linear Search and Binary Search.

Linear Search:
--------------
Linear search scans each element of the list one by one until the key is found or the list ends.
Can be used on sorted or unsorted data.
Simple to understand and implement.

Advantages:
Works on any data (no sorting required).
Easy implementation.
Useful for small datasets.

Disadvantages:
Slow for large datasets.
Inefficient when searching frequently.
Requires sequential scan of entire list in the worst case.

Binary Search:
----------------
Binary search is a highly efficient technique that works only on sorted data. It repeatedly divides the list into two halves and compares the key with the middle element.
Based on divide and conquer strategy.
Searching becomes faster as the dataset size increases.

Advantages:
Very efficient for large datasets.
Fewer comparisons required compared to linear search.
Faster execution time.

Disadvantages:
Data must be sorted before searching.
More complex implementation compared to linear search.
Not suitable for frequently changing data (because sorting must be maintained).

Linear Search is suitable for small and unsorted data, while Binary Search is faster and more efficient but requires sorted data. The choice of search method depends on dataset size and organization.

✅Applications of Linear Search
----------------------------------
Searching in unsorted data – e.g., finding an item in a random list.
Exception handling in arrays or lists where sorting is not possible.
Small datasets where performance isn’t a concern.
Checking availability of an element in a simple database (like roll number search).
Finding presence of a value in memory or storage when data is sequentially arranged.

✅ Applications of Binary Search
------------------------------------
Searching in sorted data structures like sorted arrays and linked lists.
Databases and Indexing – used to quickly search indexed records.
Dictionary word lookup in spell-checkers and lexicons.
Competitive programming and algorithms where fast search is required.
Finding elements in search engines and large datasets efficiently.

****************************************************************************************************************************************************

ALGORITHMS
---

## 🔍 Linear Search Algorithm

This algorithm checks every element in the array sequentially until the target element is found.

1.  **Start**
2.  Input the **array** $arr[]$, **size** $n$, and the **target element** to search.
3.  For each index $i$ from $0$ to $n-1$:
    * If $arr[i] == target$, **return** $i$ (the index where the element is found).
4.  If the loop ends without finding the element, **return $-1$** (indicating the element is not present).
5.  **Stop**


---

## 🗂️ Binary Search Algorithm

This algorithm is much faster but requires the input array to be **sorted**. It repeatedly divides the search interval in half.

1.  **Start**
2.  Input the **sorted array** $arr[]$, **size** $n$, and the **target element**.
3.  Initialize **left** $= 0$ and **right** $= n-1$.
4.  **Repeat** until $left \le right$:
    * Calculate **mid** $= left + (right - left) / 2$.
    * If $arr[mid] == target$, **return** $mid$ (the index where the element is found).
    * Else if $arr[mid] < target$, set **left** $= mid + 1$ (search the right half).
    * Else (if $arr[mid] > target$), set **right** $= mid - 1$ (search the left half).
5.  If the element is not found (the loop terminates), **return $-1$**.
6.  **Stop**

***

Time complexity:
--------------------
| Searching Technique | BEST | WORST    | AVERAGE  |
| ------------------- | ---- | -------- | -------- |
| **Linear Search**   | O(1) | O(n)     | O(n)     |
| **Binary Search**   | O(1) | O(log n) | O(log n) |


