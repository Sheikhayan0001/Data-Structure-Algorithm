#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maximum = 0;

    for (int i = 0; i < accounts.size(); i++) {
        int sum = 0;

        for (int j = 0; j < accounts[i].size(); j++) {
            sum += accounts[i][j];
        }

        maximum = max(maximum, sum);
    }

    return maximum;
}

int main() {
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}
    };

    cout << "Maximum Wealth: "
         << maximumWealth(accounts);

    return 0;
}