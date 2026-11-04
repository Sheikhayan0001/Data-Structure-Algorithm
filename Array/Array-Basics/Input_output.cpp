#include<iostream>
using namespace std;

void CheckGarbageValue(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // Change index value by add 10 to all array
    arr[1]+=10;
    cout<<endl;
}

int main()
{
    int arr1[4]={1,4,5,2};
    int arr2[4]={2,3};
    int arr3[4]={1};
    int arr4[4]={};
    cout<<"Array Values: ";
    CheckGarbageValue(arr1,4);
    CheckGarbageValue(arr2,4);
    CheckGarbageValue(arr3,4);
    CheckGarbageValue(arr4,4);
    
    return 0;
}