#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = static_cast<int>(temperatures.size());
        vector<int> answer(n, 0);
        stack<int> st; // Stores indices of unresolved days.

        for (int i = 0; i < n; i++) {
            while (!st.empty() &&
                   temperatures[i] > temperatures[st.top()]) {
                int previousIndex = st.top();
                st.pop();
                answer[previousIndex] = i - previousIndex;
            }
            st.push(i);
        }
        return answer;
    }
};

int main() {
    Solution obj;
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> answer = obj.dailyTemperatures(temperatures);
    for (int days : answer) cout << days << ' ';
    cout << '\n';

    return 0;
}
