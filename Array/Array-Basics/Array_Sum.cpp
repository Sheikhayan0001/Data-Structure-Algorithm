#include<iostream>
using namespace std;
// Pass by Refrence

void sumArra(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){   // idx value
        sum+=arr[i]; 
        cout<<arr[i]<<" ";
    }  
    cout<<"Array : "<</narr;
    cout<<"Sum : "<<sum;
}

int main()
{
    int arr[10] = {1,1,3,4,5,6,7,8,9,10};
    sumArra(arr,10);
    return 0;
}