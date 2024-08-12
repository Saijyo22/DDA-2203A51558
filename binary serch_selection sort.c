#include <stdio.h>

void selection_sort(int arr[], int n) {
  int i, j, min_idx;

  for (i = 0; i < n-1; i++) {
    min_idx = i;
    for (j = i+1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }

    // Swap the found minimum element with the first element
    int temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }
}

int binary_search(int arr[], int n, int target) {
  int low = 0;
  int high = n-1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1; // not found
}

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 22;

  selection_sort(arr, n);

  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int result = binary_search(arr, n, target);

  if (result != -1) {
    printf("Element found at index %d\n", result);
  } else {
    printf("Element not found\n");
  }

  return 0;
}