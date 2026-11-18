
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string exp;
    stack<int> s;

    cout << "Enter postfix expression: ";
    cin >> exp;

    for (char ch : exp) {

        if (ch >= '0' && ch <= '9') {
            s.push(ch - '0');
        }

        else {
            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            switch (ch) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }

    cout << "Result: " << s.top();

    return 0;
}
