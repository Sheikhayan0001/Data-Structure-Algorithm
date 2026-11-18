// ============================================ HEAO TEMPLATE ===============================
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Heap {
private:
    vector<T> arr;

public:
    // Insert element
    void insert(T value) {
        arr.push_back(value);

        int child = arr.size() - 1;

        // Heapify Up
        while (child > 0) {
            int parent = (child - 1) / 2;

            if (arr[parent] < arr[child]) {
                swap(arr[parent], arr[child]);
                child = parent;
            }
            else {
                break;
            }
        }
    }

    // Delete maximum element
    void deleteRoot() {
        if (arr.empty()) {
            cout << "Heap is empty\n";
            return;
        }

        arr[0] = arr.back();
        arr.pop_back();

        // Heapify Down
        int parent = 0;
        int n = arr.size();

        while (true) {
            int left = 2 * parent + 1;
            int right = 2 * parent + 2;
            int largest = parent;

            if (left < n && arr[left] > arr[largest])
                largest = left;

            if (right < n && arr[right] > arr[largest])
                largest = right;

            if (largest != parent) {
                swap(arr[parent], arr[largest]);
                parent = largest;
            }
            else {
                break;
            }
        }
    }

    // Get maximum element
    T top() {
        return arr.empty() ? T{} : arr[0];
    }

    // Display heap
    void display() {
        for (T x : arr)
            cout << x << " ";
        cout << endl;
    }
};

int main() {
    Heap<int> h;

    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(10);
    h.insert(90);

    cout << "Heap: ";
    h.display();

    cout << "Maximum: " << h.top() << endl;

    h.deleteRoot();

    cout << "After deletion: ";
    h.display();

    return 0;
}
