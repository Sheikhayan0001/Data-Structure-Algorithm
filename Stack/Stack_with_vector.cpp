#include<iostream>
#include<vector>
using namespace std ;

class Stack {
    vector<int> v;
public:
    // functions
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        // v[n-1]
        return v[v.size()-1];
    }

    bool empty(){
        return v.size() == 0;
    }
};

int main(){
    Stack s; // empty vector
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