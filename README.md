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

Source Code:
---------------
#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;   
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n, key, choice, result;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Invalid array size!\n");
        return 1;
    }
    int *arr = (int*) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    printf("\nChoose search method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if(choice == 1) {
        result = linearSearch(arr, n, key);
        if(result != -1)
            printf("Linear Search: Element %d found at index %d\n", key, result);
        else
            printf("Linear Search: Element %d not found\n", key);
    }
    else if(choice == 2) {
        bubbleSort(arr, n);
        printf("Sorted array for Binary Search: ");
        for(int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
        result = binarySearch(arr, n, key);
        if(result != -1)
            printf("Binary Search: Element %d found at index %d\n", key, result);
        else
            printf("Binary Search: Element %d not found\n", key);
    }
    else {
        printf("Invalid choice!\n");
    }


    free(arr);
    return 0;
}


Time complexity:
--------------------
| Searching Technique | BEST | WORST    | AVERAGE  |
| ------------------- | ---- | -------- | -------- |
| **Linear Search**   | O(1) | O(n)     | O(n)     |
| **Binary Search**   | O(1) | O(log n) | O(log n) |


