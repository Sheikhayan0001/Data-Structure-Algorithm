#include<iostream>
#include<vector>
using namespace std;

//====================== vector initialisation ==============================

// int main()
// {
//     vector<int> vec (5,0); 
//     vector<char> vec = {'a','b','c','d','e'} ;
//     // For each

//     // ASCI value
//     for(int i: vec){ 
//         cout << i <<" ";
//     }

//     return 0;
// }

//========================= vector function ===================================
int main(){
    // size
    // vector<char> vec = {'a','b','c','d','e'} ;
    // cout << "size: " <<vec.size();

    // push
    vector<int> vec;
    cout << "size before: " <<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(20);
    cout << "size after: " <<vec.size()<<endl;  

    // pop
    // vec.pop_back();

    // for(int i: vec){
    //     cout << i <<" ";
    // }

    // front 
    cout <<"front : "<< vec.front() << endl;

    // Back 
    cout <<"back : "<< vec.back() << endl;

    // at
    cout <<"at : "<< vec.at(0) << endl;

    return 0;
}