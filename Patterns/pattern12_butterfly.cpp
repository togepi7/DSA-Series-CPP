#include <iostream>
using namespace std;

void printButterflyPattern(int n) {
    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print stars for left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        // Print stars for right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; i--) {
        // Print stars for left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        // Print stars for right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> n;
    
    printButterflyPattern(n);
    
    return 0;
}