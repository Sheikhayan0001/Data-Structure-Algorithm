#include<iostream>
using namespace std;

int main(){
    // datatype arr_name  row*cols
    int arr[2][3];
    // Taking input
    for(int i=0; i<2 ; i++){
        for(int j=0; j<3; j++){
            cout<<"Index "<<i<<" "<<j<<" :"<<endl;
            cin>>arr[i][j];
        }
    }

    // print arr
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<< arr[i][j]<< " ";
        }
     cout << endl; // first time loop run
    }
    return 0;
}