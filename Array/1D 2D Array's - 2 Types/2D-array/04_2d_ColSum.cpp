#include <iostream>
using namespace std;

int main() {

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Outer loop: controls columns
    for (int j = 0; j < 3; j++) {

        int sum = 0;  // Reset sum for every column

        // Inner loop: travels through rows
        for (int i = 0; i < 2; i++) {

            sum += matrix[i][j];
        }

        cout << "Column " << j << " sum = " << sum << endl;
    }

    return 0;
}