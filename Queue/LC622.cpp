#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {
    vector<int> arr;
    int frontIndex;
    int rearIndex;
    int count;
    int capacity;

public:
    MyCircularQueue(int k)
        : arr(k), frontIndex(0), rearIndex(-1), count(0), capacity(k) {}

    bool enQueue(int value) {
        if (isFull()) return false;

        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = value;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;

        frontIndex = (frontIndex + 1) % capacity;
        count--;
        return true;
    }

    int Front() {
        return isEmpty() ? -1 : arr[frontIndex];
    }

    int Rear() {
        return isEmpty() ? -1 : arr[rearIndex];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }
};

int main() {
    MyCircularQueue q(3);

    cout << boolalpha;
    cout << q.enQueue(1) << '\n';
    cout << q.enQueue(2) << '\n';
    cout << q.enQueue(3) << '\n';
    cout << q.enQueue(4) << '\n';

    cout << "Rear: " << q.Rear() << '\n';
    q.deQueue();
    q.enQueue(4);
    cout << "Rear after reuse: " << q.Rear() << '\n';

    return 0;
}
