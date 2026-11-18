#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> st;
    stack<int> minSt;

public:
    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if (st.empty()) return;

        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top(); // Call only when the stack is not empty.
    }

    int getMin() {
        return minSt.top(); // Call only when the stack is not empty.
    }
};

int main() {
    MinStack s;

    s.push(-2);
    s.push(0);
    s.push(-3);

    cout << "Minimum: " << s.getMin() << '\n';
    s.pop();
    cout << "Top: " << s.top() << '\n';
    cout << "Minimum: " << s.getMin() << '\n';

    return 0;
}
