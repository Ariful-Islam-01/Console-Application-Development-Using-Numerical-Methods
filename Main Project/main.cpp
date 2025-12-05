#include <bits/stdc++.h>
using namespace std;

// include headers from all folders
#include "Gauss elimination/gauss.h"
#include "Gausss-Jordan elimination/gauss_jordan.h"


int main() {
    int choice;

    while (true) {
        cout << "\n======= Numerical Methods Console Application =======\n";
        cout << "1. Gauss Elimination\n";
        cout << "2. Gauss-Jordan Elimination\n";

        cout << "======================================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: gauss(); break;
            case 2: gauss_jordan(); break;

            case 0: cout << "Goodbye!\n"; return 0;
            default: cout << "Invalid choice. Try again.\n";
        }
    }
}
