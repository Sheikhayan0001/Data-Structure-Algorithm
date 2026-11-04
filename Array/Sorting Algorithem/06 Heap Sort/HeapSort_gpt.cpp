// 📌 Definition

// Heap Sort uses a Binary Heap to sort elements.

// For ascending order, we generally use a:

// Max Heap

// Max Heap:

//         50
//        /  \
//      30    40
//     / \
//    10 20

#include <iostream>
using namespace std;

// =====================================================
// HEAP SORT
// =====================================================
// Heap Sort uses a Binary Heap.
//
// For ascending order:
// We create a MAX HEAP.
//
// Time Complexity:
// Best Case    : O(n log n)
// Average Case : O(n log n)
// Worst Case   : O(n log n)
//
// Space Complexity:
// O(1)
//
// Stable: NO
// =====================================================

// Heapify subtree rooted at index i
void heapify(int arr[], int n, int i)
{
    int largest = i;

    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check left child
    if(left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    // Check right child
    if(right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    // If largest is not root
    if(largest != i)
    {
        // Swap root and largest
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify affected subtree
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // =================================================
    // STEP 1: BUILD MAX HEAP
    // =================================================

    for(int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // =================================================
    // STEP 2: EXTRACT ELEMENTS
    // =================================================

    for(int i = n - 1; i > 0; i--)
    {
        // Move maximum element to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Restore heap
        heapify(arr, i, 0);
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
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = 6;

    cout << "Before sorting: ";
    display(arr, n);

    heapSort(arr, n);

    cout << "After sorting: ";
    display(arr, n);

    return 0;
}