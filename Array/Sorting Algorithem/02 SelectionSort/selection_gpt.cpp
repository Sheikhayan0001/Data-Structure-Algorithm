// 🎯 2.2 Selection Sort
// 📌 Definition

// Selection Sort repeatedly finds the smallest element from the unsorted portion and places it at the beginning.

#include <iostream>
using namespace std;

// =====================================================
// SELECTION SORT
// =====================================================
// Finds minimum element and places it at correct position.
//
// Time Complexity:
// Best Case    : O(n^2)
// Average Case : O(n^2)
// Worst Case   : O(n^2)
//
// Space Complexity:
// O(1)
//
// Stable: NO
// =====================================================

void selectionSort(int arr[], int n)
{
    // Move boundary of unsorted portion
    for(int i = 0; i < n - 1; i++)
    {
        // Assume current element is minimum
        int minIndex = i;

        // Find minimum element
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Put minimum at correct position
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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
    
    selectionSort(arr, n);

    cout << "After sorting: ";
    display(arr, n);

    return 0;
}