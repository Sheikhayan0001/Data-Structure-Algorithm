#include<iostream>
#include<memory>
using namespace std;

class Employee{

}

int main()
{
    shared_ptr<Employee> ptr = make_shared<Employee>() ;
    ptr->id = 101;
    cout << ptr->id <<endl;
    shared_ptr <Employee> ptr2 = ptr ;
    cout << ptr2->id <<endl ;
    
    {
        shared_ptr<Employee> ptr3 = make_shared<Employee> ();
        ptr3->id = 102;
        ptr2 = ptr3;
    }
    return 0;
}