#include<iostream>
using namespace std;

void BubbleSort(int ar[],int n){
    bool s = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
                s = true;
            }
        }
    }
}
    
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    BubbleSort(arr,n);
    
    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
    
    return 0;
}