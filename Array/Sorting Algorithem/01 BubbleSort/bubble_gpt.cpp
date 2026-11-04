// 📌 Definition

// Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

#include <iostream>
using namespace std;

// =====================================================
// BUBBLE SORT
// =====================================================
// Compares adjacent elements and swaps them.
//
// Time Complexity:
// Best Case    : O(n)      -> Optimized version
// Average Case : O(n^2)
// Worst Case   : O(n^2)
//
// Space Complexity:
// O(1)
//
// Stable: YES
// =====================================================

// true    // yes / happened
// false   // no / did not happen

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {   
        //"At the beginning of this pass, assume that no swapping has happened."
        // means array sorted
        bool swapped = false;

        // Compare adjacent elements
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Did I have to swap anything in this pass?
                swapped = true;
            }
        }

        // If no swapping happened,
        // array is already sorted

// If swapped is still false, it means:
// "I went through the entire array, but I didn't find a single pair that needed swapping."
// Therefore, the array is already sorted, so there is no reason to continue.

        if(swapped == false)
        {
            break;
        }
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

    bubbleSort(arr, n);

    cout << "After sorting: ";
    display(arr, n);

    return 0;
}