#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int orders1[] = {87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int n1 = sizeof(orders1)/sizeof(orders1[0]);

    int orders2[] = {44, 66, 37, 90, 81, 43, 55, 19, 98, 33, 72, 51};
    int n2 = sizeof(orders2)/sizeof(orders2[0]);

    bubbleSort(orders1, n1);
    bubbleSort(orders2, n2);

    printf("Test Case-1\n");
    printf("After Sorting Orders Priority:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d", orders1[i]);
        if (i < n1-1) printf(", ");
    }
    printf("\n");

    printf("Test Case-2\n");
    printf("After Sorting Orders Priority:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d", orders2[i]);
        if (i < n2-1) printf(", ");
    }
    printf("\n");

    return 0;
}