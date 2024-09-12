#include <iostream>
using namespace std;

void printHollowDiamond(int n) {
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (half of the diamond): ";
    cin >> n;
    printHollowDiamond(n);
    return 0;
}