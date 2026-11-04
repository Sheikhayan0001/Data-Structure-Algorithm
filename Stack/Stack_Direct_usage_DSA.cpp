#include<iostream>
#include<list>
#include<stack>
using namespace std;

int main()
{
    stack<int>s; // empty vector
    // adding elemnts
    s.push(30); // go down
    s.push(20);
    s.push(10); // go front

    // traversal
    while(!s.empty()){
        cout <<s.top() <<" ";
        s.pop();
    }

    cout << endl;
    return 0;
}