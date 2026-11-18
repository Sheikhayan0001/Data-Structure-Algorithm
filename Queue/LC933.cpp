#include <iostream>
#include <queue>
using namespace std;

class RecentCounter {
    queue<int> requests;

public:
    int ping(int t) {
        requests.push(t);

        while (!requests.empty() && requests.front() < t - 3000) {
            requests.pop();
        }
        return static_cast<int>(requests.size());
    }
};

int main() {
    RecentCounter counter;

    cout << counter.ping(1) << '\n';
    cout << counter.ping(100) << '\n';
    cout << counter.ping(3001) << '\n';
    cout << counter.ping(3002) << '\n';

    return 0;
}
