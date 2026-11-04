#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, c;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        
        // Previous Trems
        c = a + b; 
        a = b;
        b = c;
    }

    return 0;
}