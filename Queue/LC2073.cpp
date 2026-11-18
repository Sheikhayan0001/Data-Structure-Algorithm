#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int totalTime = 0;

        for (int i = 0; i < static_cast<int>(tickets.size()); i++) {
            if (i <= k) {
                totalTime += min(tickets[i], tickets[k]);
            } else {
                totalTime += min(tickets[i], tickets[k] - 1);
            }
        }
        return totalTime;
    }
};

int main() {
    Solution obj;
    vector<int> tickets = {2, 3, 2};
    int k = 2;

    cout << "Total time: " << obj.timeRequiredToBuy(tickets, k) << '\n';
    return 0;
}
