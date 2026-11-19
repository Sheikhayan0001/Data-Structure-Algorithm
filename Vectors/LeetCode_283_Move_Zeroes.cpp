#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int index = 0;

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] != 0) {
            swap(nums[index], nums[i]);
            index++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    cout << "After Moving Zeroes: ";

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
