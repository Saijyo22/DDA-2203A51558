#include <stdio.h>

#define MAX_SIZE 1000  



void merge(int arr[], int begin, int mid, int end) {
    int n1 = mid - begin + 1;
    int n2 = end - mid;

    
    int L[MAX_SIZE], R[MAX_SIZE];


    for (int i = 0; i < n1; i++)
        L[i] = arr[begin + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    
    int i = 0; 
    int j = 0; 
    int k = begin; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int begin, int end) {
    if (begin < end) {
        
        int mid = begin + (end - begin) / 2;


        mergeSort(arr, begin, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, begin, mid, end);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {38,27,43,3,9,82,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
