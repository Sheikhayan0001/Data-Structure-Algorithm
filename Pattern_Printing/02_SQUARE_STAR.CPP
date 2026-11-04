// * * * * 
// * * * * 
// * * * * 
// * * * *
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    // i=0; i<n == i=1; i<=n == position in arr and string 
    for(int i=0; i<n; i++){    // outer decide no of line or cols
        for(int j=1; j<=n; j++){    //inner decide what to print
            cout<<"* ";          
        }
        cout << endl;
    }   
    return 0;
}