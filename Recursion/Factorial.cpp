#include<iostream>
using namespace std;

// FACTORIAL FUNCTION
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    // RECURSIVE FUNCTION
    return n * factorial(n - 1);
}
int main(){
    cout << factorial(5);
    return 0;
}