#include<iostream>
#include<string>
#include<memory>
using namespace std;

class Employee{
public:
    string name;
    int age;

    Employee(string name, int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};

int main()
{  
    unique_ptr<Employee> emp = make_unique<Employee>("Rahul",20);

    // Print memory address of Employee object
    // its safe dosn't print memo address
    cout << "Memory Address: " << emp.get() << endl;

    emp->display();
    return 0;
}