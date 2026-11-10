#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves
void merge(vector<int>& arr, int start, int mid, int end) {

    vector<int> temp;

    int left = start;
    int right = mid + 1;

    // Compare elements from both halves
    while (left <= mid && right <= end) {

        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= end) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back into original array
    for (int i = 0; i < temp.size(); i++) {
        arr[start + i] = temp[i];
    }
}

// Recursive Merge Sort function
void mergeSort(vector<int>& arr, int start, int end) {

    // Base Case
    if (start >= end) {
        return;
    }

    // Find middle index
    int mid = start + (end - start) / 2;

    // Divide left half - Complete
    mergeSort(arr, start, mid);

    // Divide right half - Complete
    mergeSort(arr, mid + 1, end);

    // Merge both sorted halves
    merge(arr, start, mid, end);
}

int main() {

    vector<int> arr = {8, 3, 5, 2, 9, 1, 6, 4};

    int n = arr.size();

    cout << "Original Array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted Array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}