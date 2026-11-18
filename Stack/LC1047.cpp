#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string st;

        for (char ch : s) {
            if (!st.empty() && st.back() == ch) {
                st.pop_back();
            } else {
                st.push_back(ch);
            }
        }
        return st;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Result: " << obj.removeDuplicates(s) << '\n';
    return 0;
}
