#include<iostream>
using namespace std;

int fibonacci(int n){
    // BASE CASE
    if (n == 0){
        return 0;
    }
     if (n == 1){
        return 1;
    }

    // RECURSIVE CASE
    return fibonacci(n -1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(6);
    return 0;
}