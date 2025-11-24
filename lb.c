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
