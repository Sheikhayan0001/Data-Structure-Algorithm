// 📌 Definition

// Insertion Sort builds the sorted array one element at a time by inserting each element into its correct position

#include <iostream>
using namespace std;

// =====================================================
// INSERTION SORT
// =====================================================
// Builds sorted portion one element at a time.
//
// Time Complexity:
// Best Case    : O(n)
// Average Case : O(n^2)
// Worst Case   : O(n^2)
//
// Space Complexity:
// O(1)
//
// Stable: YES
// =====================================================

void insertionSort(int arr[], int n)
{
    // Start from second element
    for(int i = 1; i < n; i++)
    {
        // Current element
        int key = arr[i];

        // Previous element
        int j = i - 1;

        // Shift larger elements to right
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at correct position fixed
        arr[j + 1] = key;
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
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    cout << "Before sorting: ";
    display(arr, n);

    insertionSort(arr, n);

    cout << "After sorting: ";
    display(arr, n);

    return 0;
}