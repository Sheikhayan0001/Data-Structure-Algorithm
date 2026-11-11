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
    shared_ptr << Employee 
    return 0;
}