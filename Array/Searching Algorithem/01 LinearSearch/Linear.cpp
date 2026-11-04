#include<iostream>
using namespace std;
🔎 Linear Search — When and Why?
/*What is Linear Search?

Linear Search means:

Start from the first element and check every element one by one until you find the element you're looking for.*/

void linearSearch(int arr[],int SIZE,int TARGET){

    bool found = false;

    for(int i=0; i<SIZE; i++){                      
        if(arr[i] == TARGET){
            cout<<"Array idx : "<<i<<endl;
            found = true;
        }  
    }
    if(!found) {
        cout << "Idx Not Found -1";
    }
}
int main()
{
    int n;                                       
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