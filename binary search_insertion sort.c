#include <stdio.h>

// Function to perform binary search and find the index for insertion
int binary_Search(int *array_nums, int key, int low, int high)
{
    // Base case: when the search space is reduced to a single element
    if (low >= high)
        return (key > array_nums[low]) ? (low + 1) : low;

    // Calculate the middle index
    int mid = low + (high - 1) / 2;

    // Check if the key is at the middle index
    if (array_nums[mid] == key)
        return mid + 1;
    // If the key is smaller, search in the left subarray
    else if (array_nums[mid] > key)
        return binary_Search(array_nums, key, low, mid - 1);
    // If the key is larger, search in the right subarray
    else
        return binary_Search(array_nums, key, mid + 1, high);
}

// Function to perform insertion sort on an array
void insertion_Sort(int *array_nums, int size)
{
    int i, j, key, index;

    // Iterate through each element in the array
    for (i = 0; i < size; i++)
    {
        j = i - 1;
        key = array_nums[i];

        // Use binary search to find the index for inserting the key
        index = binary_Search(array_nums, key, 0, j);

        // Shift elements to make space for the key
        while (j >= index)
        {
            array_nums[j + 1] = array_nums[j];
            j = j - 1;
        }

        // Insert the key at the correct position
        array_nums[j + 1] = key;
    }
}

int main()
{
    int array_nums[100], i, n = 0;
    printf("Input number of elements you want to sort: ");
    scanf("%d", &n);

    // Check if the input size is valid
    if (n >= 1)
    {
        printf("\nInput the numbers:\n");

        // Input the numbers into the array
        for (i = 0; i < n; i++)
            scanf(" %d", &array_nums[i]);

        // Call the insertion_Sort function to sort the array
        insertion_Sort(array_nums, n);

        // Display the sorted array
        printf("Sorted array: \n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", array_nums[i]);
        }
        printf("\n");
    }

    return 0;
}