#include<iostream>
using namespace std;
// Pass by Refrence

void sumArra(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        // sum+=i;
        cout<<arr[i]<<" ";
    }
    cout<<endl;     
    cout<<"Array : "<<arr;
    // cout<<"Sum : "<<sum;
}

int main()
{
    int arr[10] = {1,1,3,4,5,6,7,8,9,10};
    sumArra(arr,10);
    // cout<<arr<<endl;
    // for(int i=0;i<arr[i];i++){
    //     cout<<arr[i];
    // }

    return 0;
}