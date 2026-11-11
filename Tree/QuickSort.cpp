
#include <iostream>
#include <vector>
using namespace std;

// Partition function
int partition(vector<int>& arr, int low, int high)
{
    // Select last element as pivot
    int pivot = arr[high];

    // Position for smaller elements
    int partitionIndex = low - 1;

    for (int current = low; current < high; current++)
    {
        // If current element is smaller than pivot
        if (arr[current] < pivot)
        {
            partitionIndex++;

            swap(arr[partitionIndex], arr[current]);
        }
    }

    // Place pivot at its correct position
    swap(arr[partitionIndex + 1], arr[high]);

    return partitionIndex + 1;
}

// Quick Sort function
void quickSort(vector<int>& arr, int low, int high)
{
    // Base condition
    if (low < high)
    {
        // Find pivot's correct position
        int pivotIndex = partition(arr, low, high);

        // Sort left part
        quickSort(arr, low, pivotIndex - 1);

        // Sort right part
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    vector<int> arr = {5, 3, 8, 4, 2, 7, 1, 10};

    int n = arr.size();

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int number : arr)
    {
        cout << number << " ";
    }

    return 0;
}
