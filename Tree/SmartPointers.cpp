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
    //========================= CREATE UNIQUE POINTER ====================
    cout<<"======================== UNIQUE POINTER ========================"
    unique_ptr<Employee> emp = make_unique<Employee>("Rahul",20);

    // SOTRE ADD OF 1ST UNIQUE POINTER
    unique_ptr<Employee> *emp2 = &emp;
    cout <<"Acceseing to another pointer :"<< (*emp2)->age <<endl;

    
    // Print memory address of Employee object

    // its safe dosn't print memo address = But after conclusion its give address nb 
    cout << "Memory Address: " << emp.get() << endl; // 1st PTR

    cout<<"\nage access :"<<&(*emp)<<endl; // 2nd PTR

    emp->display();

    //==========================Create Shared Pointer ================
    return 0;
}