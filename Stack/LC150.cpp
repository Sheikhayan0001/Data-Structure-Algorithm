#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;

        for (const string& token : tokens) {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {

                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();

                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else st.push(a / b); // C++ integer division truncates toward zero.
            } else {
                st.push(stoll(token));
            }
        }
        return static_cast<int>(st.top());
    }
};

int main() {
    Solution obj;
    vector<string> tokens = {"2", "1", "+", "3", "*"};

    cout << "Answer: " << obj.evalRPN(tokens) << '\n';
    return 0;
}
