#include<iostream>
using namespace std;

// user defined Data Type
class Node{
public:
    int val ;
    Node* next ; // next-Node address

    Node(int val){
        this->val = val ;
    }
};

int main()
// Node objects
{   // assigning value 
    // Independent Node
    Node a(7); // head
    Node b(0);
    Node c(1);
    Node d(8);
    Node e(2);

    // attaching nodes
    // storing address of next varialble
    a.next = &b; 
    b.next = &c;
    c.next = &d;
    d.next = &e;

    // gives same address b
    // for val we use derefrence opr *(&b)
    //cout<<a.next<<endl; // b  = 0x61ff00
    //cout<<&b<<endl;     // b  = 0x61ff00
    // ().val
      cout<<(*(a.next)).val<<endl;
      cout<<(a.next)->val<<endl; // remove derefrence opr and while using arrow

    // pointer
    int x = 5;
    int*ptr  = &x ; // address

    // * get val by derefrence opr
    cout<<"variable Address : "<<&x<<endl;
    cout<<"pointer Address : "<<&ptr<<endl;
    cout<<"Value : "<<*ptr<<endl;

    return 0;
} 