#include<iostream>
#include<list>
using namespace std;

class Stack {
    list<int> list;
public:
    // functions
    void push(int val){
        list.push_front(val);
    }

    void pop(){
        list.pop_front();
    }

    int top(){
        return list.front();
    }

    bool empty(){
        return list.size() == 0;
    }
};


int main()
{
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