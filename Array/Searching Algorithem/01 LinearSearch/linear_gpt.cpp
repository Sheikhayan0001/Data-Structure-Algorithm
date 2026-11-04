#include <iostream>
using namespace std;

// 📌 Definition

// Linear Search checks each element of an array one by one until the required element is found.
// =====================================================
// LINEAR SEARCH
// =====================================================
// Linear Search checks every element one by one.
//
// Time Complexity:
// Best Case    : O(1)
// Average Case : O(n)
// Worst Case   : O(n)
//
// Space Complexity:
// O(1)
// =====================================================

int linearSearch(int arr[], int n, int target)
{
    // Traverse the array
    for(int i = 0; i < n; i++)
    {
        // Check whether current element is target
        if(arr[i] == target)
        {
            return i; // Return index if found
        }
    }

    // Element not found
    return -1;
}

int main()
{
    int arr[] = {10, 25, 30, 45, 60};
    int n = 5;

    int target;

    cout << "Enter element to search: ";
    cin >> target;

    int result = linearSearch(arr, n, target);

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