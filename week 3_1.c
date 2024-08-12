#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Function to search for a specific price in the sorted price array
int binarySearchPrice(int prices[], int n, int price) {
    return binarySearch(prices, n, price);
}

// Function to search for a specific salary in the sorted salary array
int binarySearchSalary(int salaries[], int n, int salary) {
    return binarySearch(salaries, n, salary);
}

int main() {
    // Test case 1 for binarySearchPrice
    int prices[] = {15, 30, 45, 60, 75, 90, 105, 120};
    int n = sizeof(prices) / sizeof(prices[0]);
    int price = 75;
    int index = binarySearchPrice(prices, n, price);
    if (index != -1) {
        printf("Find the price of a product priced at: $%d\n", prices[index]);
    } else {
        printf("Price not found\n");
    }

    // Test case 2 for binarySearchPrice
    int prices2[] = {10, 20, 35, 50, 65, 80, 95, 110};
    n = sizeof(prices2) / sizeof(prices2[0]);
    price = 35;
    index = binarySearchPrice(prices2, n, price);
    if (index != -1) {
        printf("Find the price of a book priced at: $%d\n", prices2[index]);
    } else {
        printf("Price not found\n");
    }

    // Test case 1 for binarySearchSalary
    int salaries[] = {3000, 4500, 5500, 6500, 7500, 8500, 9500, 11000};
    n = sizeof(salaries) / sizeof(salaries[0]);
    int salary = 6500;
    index = binarySearchSalary(salaries, n, salary);
    if (index != -1) {
        printf("Find the salary of the TCS employee with a salary of: $%d\n", salaries[index]);
    } else {
        printf("Salary not found\n");
    }

    return 0;
}