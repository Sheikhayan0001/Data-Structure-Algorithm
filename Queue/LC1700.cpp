#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int student : students) q.push(student);

        int sandwichIndex = 0;
        int unableToEatInARow = 0;

        while (!q.empty() && unableToEatInARow < static_cast<int>(q.size())) {
            if (q.front() == sandwiches[sandwichIndex]) {
                q.pop();
                sandwichIndex++;
                unableToEatInARow = 0;
            } else {
                int student = q.front();
                q.pop();
                q.push(student);
                unableToEatInARow++;
            }
        }
        return static_cast<int>(q.size());
    }
};

int main() {
    Solution obj;
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1};

    cout << "Students unable to eat: "
         << obj.countStudents(students, sandwiches) << '\n';
    return 0;
}
