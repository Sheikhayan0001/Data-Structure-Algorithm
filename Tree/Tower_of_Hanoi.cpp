
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C) {

    // BASE CASE: Only one disk remains
    if (n == 1) {
        cout << "Move disk 1 from "
             << A << " to " << C << endl;
        return;
    }

    // MISSION 1: Move n-1 disks from A to B
    towerOfHanoi(n - 1, A, C, B);

    // MISSION 2: Move the largest disk from A to C
    cout << "Move disk " << n
         << " from " << A << " to " << C << endl;

    // MISSION 3: Move n-1 disks from B to C
    towerOfHanoi(n - 1, B, A, C);
}

int main() {

    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
