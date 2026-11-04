#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // Target found
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // Search right half
        }
        else {
            high = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    int target;
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}