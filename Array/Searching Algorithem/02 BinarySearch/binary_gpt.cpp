// 📌 Definition

// Binary Search repeatedly divides a sorted array into two halves to find the target element.

// ⚠️ Important

// Binary Search requires a sorted array.

#include <iostream>
using namespace std;

// =====================================================
// BINARY SEARCH
// =====================================================
// IMPORTANT:
// Array must be SORTED.
//
// Time Complexity:
// Best Case    : O(1)
// Average Case : O(log n)
// Worst Case   : O(log n)
//
// Space Complexity:
// O(1)
// =====================================================

// Formula  mid = low + (high - low) / 2;

int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        // Find middle index
        int mid = low + (high - low) / 2;

        // Target found
        if(arr[mid] == target)
        {
            return mid;
        }

        // Target is in right half
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }

        // Target is in left half
        else
        {
            high = mid - 1;
        }
    }

    // Target not found
    return -1;
}

int main()
{
    // MUST BE SORTED
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int n = 7;
    int target;

    cout << "Enter element to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if(result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}