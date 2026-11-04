#include<iostream>
using namespace std;

// RECUSIVE FUNCTION
void countDown(int n){
    // BASE CASE : WHEN NEED TO STOP
    if(n == 0){
        return;
    }
    // PRINT CURRENT NUMBER
    cout<< n <<" ";
    // RECURSIVE CALL
    countDown(n-1);
}

int main(){
    countDown(5);
    return 0;
}

// countDown(3)
//     |
//     └── countDown(2)
//             |
//             └── countDown(1)
//                     |
//                     └── countDown(0)
//                             |
//                             └── STOP