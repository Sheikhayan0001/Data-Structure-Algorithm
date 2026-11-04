// Merge Sort uses Divide and Conquer.

// Three major steps:

// DIVIDE
//    ↓
// CONQUER
//    ↓
// MERGE

#include <iostream>
using namespace std;

// =====================================================
// MERGE SORT
// =====================================================
// Merge Sort follows Divide and Conquer.
//
// Steps:
// 1. Divide array into two halves
// 2. Recursively sort both halves
// 3. Merge sorted halves
//
// Time Complexity:
// Best Case    : O(n log n)
// Average Case : O(n log n)
// Worst Case   : O(n log n)
//
// Space Complexity:
// O(n)
//
// Stable: YES
// =====================================================

void merge(int arr[], int low, int mid, int high)
{
    int i = low;       // Left half pointer
    int j = mid + 1;   // Right half pointer
    int k = 0;         // Temporary array pointer

    int temp[100];

    // Compare elements from both halves
    while(i <= mid && j <= high)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    // Copy remaining left elements
    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining right elements
    while(j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temporary array back
    for(i = low, k = 0; i <= high; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int low, int high)
{
    // Base condition
    if(low < high)
    {
        int mid = low + (high - low) / 2;

        // Sort left half
        mergeSort(arr, low, mid);

        // Sort right half
        mergeSort(arr, mid + 1, high);

        // Merge both halves
        merge(arr, low, mid, high);
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
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;

    cout << "Before sorting: ";
    display(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "After sorting: ";
    display(arr, n);

    return 0;
}