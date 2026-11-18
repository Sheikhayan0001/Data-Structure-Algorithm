#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxDeque; // Indices, values in decreasing order.
        deque<int> minDeque; // Indices, values in increasing order.

        int left = 0;
        int answer = 0;

        for (int right = 0; right < static_cast<int>(nums.size()); right++) {
            while (!maxDeque.empty() && nums[maxDeque.back()] < nums[right]) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(right);

            while (!minDeque.empty() && nums[minDeque.back()] > nums[right]) {
                minDeque.pop_back();
            }
            minDeque.push_back(right);

            while (static_cast<long long>(nums[maxDeque.front()]) -
                   nums[minDeque.front()] > limit) {
                left++;

                if (!maxDeque.empty() && maxDeque.front() < left) {
                    maxDeque.pop_front();
                }
                if (!minDeque.empty() && minDeque.front() < left) {
                    minDeque.pop_front();
                }
            }

            answer = max(answer, right - left + 1);
        }
        return answer;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {8, 2, 4, 7};
    int limit = 4;

    cout << "Longest valid subarray: "
         << obj.longestSubarray(nums, limit) << '\n';
    return 0;
}
