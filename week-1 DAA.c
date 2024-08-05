#include <stdio.h>

// Function to sort the array in ascending order using Bubble Sort
void bubbleSortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to sort the array in descending order using Bubble Sort
void bubbleSortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
}

int main() {
    int arr1[] = {20, 15, 30, 42};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Test Case-1\n");
    printf("INPUT:\n");
    printArray(arr1, n1);
    bubbleSortAscending(arr1, n1);
    printf("OUTPUT:\n");
    printArray(arr1, n1);

    int arr2[] = {15, 69, 80, 14};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\nTest Case-2\n");
    printf("INPUT:\n");
    printArray(arr2, n2);
    bubbleSortDescending(arr2, n2);
    printf("OUTPUT:\n");
    printArray(arr2, n2);

    return 0;
}