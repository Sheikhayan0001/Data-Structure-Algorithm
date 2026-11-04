#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &ar, int size, int target) {
    if(left > right){
        return -1;
    }
    int mid = (left +right) / 2;
    if(ar[mid] == target){
        return mid;
    }
    if(ar[mid]>target){
        return binarySearch(ar, target,)
    }

    return -1; // Target not found
}

void count(int i; int n){

}
int main()
{
    
    return 0;
}