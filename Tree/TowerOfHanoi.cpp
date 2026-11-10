#include<iostream>
using namespace std;

void towerOfHanoi(int disk, char source, char helper, char destination){
    // BASE CASE
    if(disk == 1){
        cout <<"moving Disk 1 from "<< source <<" to "<< destination <<endl;
        return;
    }

    // A TO B
    towerOfHanoi(disk-1, source, destination , helper);

    // MOVING LARGEST DISK FROM A TO C LAST DISK
    cout <<"moving disk "<<disk << " from "<<source << " to "<<destination<<endl;

    // B TO C
    towerOfHanoi(disk-1, helper, source, destination);
}

int main(){
    
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}