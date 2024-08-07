#include <stdio.h>
void insertionSortAscending(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void insertionSortDescending(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
}

int main() {
    int arr1[] = {250, 150, 400, 320};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Test Case-1\n");
    printf("INPUT:\n");
    printArray(arr1, n1);
    insertionSortDescending(arr1, n1);
    printf("OUTPUT:\n");
    printArray(arr1, n1);

    int arr2[] = {100, 900, 700, 150};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\nTest Case-2\n");
    printf("INPUT:\n");
    printArray(arr2, n2);
    insertionSortAscending(arr2, n2);
    printf("OUTPUT:\n");
    printArray(arr2, n2);

    return 0;
}
