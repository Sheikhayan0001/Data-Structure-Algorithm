// A B C D 
// A B C D 
// A B C D 
// A B C D 
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0; i<n; i++){
        // at the starting we want A
        char ch = 'A';
        for(int j=0; j<n; j++){
            // increasing by asci value
            // A+1 = B
            cout <<ch<<" ";
            ch = ch + 1; // type conversion = 65 + 1 = 66
        }
        cout << endl;
    }
    return 0;
}