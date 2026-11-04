#include<iostream>
using namespace std;

int main()
{
    int arr[2][3];

    // Input
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<"Idx: "<<i<<j<<" = ";
            cin>>arr[i][j];
        }
    }

    // Row Sum
    for(int i=0; i<2; i++){
        int sum = 0; // Reset sum for every column
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }

        cout << "Row "<< i <<" Sum = "<<sum<<endl;
    }
    return 0;
}