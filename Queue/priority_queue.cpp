// 11. Priority Queue
// In a normal queue, the first inserted element is deleted first.

// In a Priority Queue, the element with the highest priority is served first.

// Example:
// Element	Priority
// A	3
// B	1
// C	2

// If smaller number means higher priority, the order is B, C, A.


#include <iostream>
#include <queue>
using namespace std;

int main() {

    // Smaller number = Higher priority
    priority_queue<
        pair<int, string>,
        vector<pair<int, string>>,
        greater<pair<int, string>>
    > pq;

    pq.push({3, "A"});
    pq.push({1, "B"});
    pq.push({2, "C"});

    cout << "Priority Queue:\n";

    while (!pq.empty()) {
        cout << pq.top().second
             << " Priority: "
             << pq.top().first << endl;

        pq.pop();
    }

    return 0;
}
