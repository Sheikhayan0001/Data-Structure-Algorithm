// 📌 Definition

// Quick Sort is a Divide and Conquer sorting algorithm that selects a pivot and partitions the array around it.

#include <iostream>
using namespace std;

// =====================================================
// QUICK SORT
// =====================================================
// Quick Sort uses Divide and Conquer.
//
// Main concepts:
// 1. Pivot
// 2. Partition
// 3. Recursion
//
// Time Complexity:
// Best Case    : O(n log n)
// Average Case : O(n log n)
// Worst Case   : O(n^2)
//
// Space Complexity:
// Average       : O(log n) recursion stack
// Worst Case    : O(n)
//
// Stable: NO
// =====================================================

int partition(int arr[], int low, int high)
{
    // Select last element as pivot
    int pivot = arr[high];

    int i = low - 1;

    // Find elements smaller than pivot
    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;

            // Swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Put pivot in correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        // Find pivot position
        int pivotIndex = partition(arr, low, high);

        // Sort left side
        quickSort(arr, low, pivotIndex - 1);

        // Sort right side
        quickSort(arr, pivotIndex + 1, high);
    }
}

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    cout << "Before sorting: ";
    display(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "After sorting: ";
    display(arr, n);

    return 0;
}