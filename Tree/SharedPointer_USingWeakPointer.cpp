#include<iostream>
using namespace std;

int main()
{
    shared_ptr<int> ptr1 = make_shared<int>(10);
    
    weak_ptr<int> ptr2 = ptr1;

    if(shared_ptr<int> lock = ptr2.lock()){
        cout << temp << endl;
    }else{
        cout << "No pointer is there..."<<endl;
    }
    return 0;
}