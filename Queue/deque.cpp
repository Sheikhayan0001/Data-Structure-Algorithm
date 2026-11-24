// Deque (Double Ended Queue)
// A Deque allows insertion and deletion from both ends.

// Four main operations:
// 1. Insert Front
// 2. Insert Rear
// 3. Delete Front
// 4. Delete Rear

#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    // Insert from front
    dq.push_front(10);

    // Insert from rear
    dq.push_back(20);

    dq.push_front(5);

    dq.push_back(30);

    cout << "Deque: ";

    for (int x : dq) {
        cout << x << " ";
    }

    cout << "\n";

    // Delete from front
    dq.pop_front();

    // Delete from rear
    dq.pop_back();

    cout << "After deletion: ";

    for (int x : dq) {
        cout << x << " ";
    }

    cout << "\n";

    cout << "Front: " << dq.front() << endl;
    cout << "Rear: " << dq.back() << endl;

    return 0;
}
