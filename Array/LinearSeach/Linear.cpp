#include<iostream>
using namespace std;

void linearSearch(int arr[],int SIZE,int TARGET){ // space    |   time
    for(int i=0;i<SIZE;i++){                      //  
        if(arr[i]==TARGET){
            cout<<"Array idx : "<<i<<endl;
        }
           
    }
     cout<<"Idx Not Found"<<"-1";
}
int main()
{
    int n;                                       // 0  | n 
    cout<<"Input no of Elements : "<<endl;
    cin>>n;
    int arr[n] ;

    // Array input
    for(int i=0;i<n;i++){
        cout<<"Input idx"<<endl;
        cin>>arr[i];    
    }

    int target_value;
    cout<<"Target Value : "<<endl;

    cin>>target_value;

    linearSearch(arr,n,target_value);

    return 0;
}