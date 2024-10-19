#include <iostream>
using namespace std;

int main() {
    int n = 4;

        // Upper Part 
    for (int i = 1; i <= n; i++) {
        // Left side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; 
    }

        // Lower Part
    for (int i = n; i >= 1; i--) {
        // Left side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  
    }
        return 0;
}




// O/P:
// *      *
// **    **
// ***  ***
// ********  
// ********                  
// ***  ***
// **    **
// *      *


