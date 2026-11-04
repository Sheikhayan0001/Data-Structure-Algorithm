#include<iostream>
using namespace std;

int main()
{
    int arrSum[2][2];
    int sum = 0 ;

    // Input
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Idx :"<<i<<j<<" ";
            cin>>arrSum[i][j];
        }
    }

    // Print
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<arrSum[i][j]<<" ";
        }
        cout << endl;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum+=arrSum[i][j];
        }
    }

    cout<<"Sum : "<<sum<<endl;

    cout<<"Array 00: "<<arrSum[0][0]<<endl;
    cout<<"Array 01: "<<arrSum[0][1]<<endl;
    cout<<"Array 10: "<<arrSum[1][0]<<endl;
    cout<<"Array 11: "<<arrSum[0][1]<<endl;

    return 0;
}