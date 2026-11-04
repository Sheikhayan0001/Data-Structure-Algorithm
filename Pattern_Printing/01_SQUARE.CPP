// 1234
// 1234
// 1234
// 1234
#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=1; i<=n; i++){    // outer decide no of line or cols
        for(int j=1; j<=n; j++){    //inner decide what to print
            cout<<j<<" ";           // 1->2->3->n
        }
        cout << endl;
    }   
    return 0;
}