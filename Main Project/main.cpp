#include <bits/stdc++.h>
using namespace std;

// include headers from all folders
#include "Gauss elimination/gauss.h"
#include "Gausss-Jordan elimination/gauss_jordan.h"
#include "Bi-section Method/bisection.h"
#include "False Position Method/falseposition.h"
#include "Newton-Raphson Method/newton_raphson.h"
#include "Secant Method/secant.h"
#include "Runge-Kutta Method/RK.h"
int main() {
    int choice;

    while (true) {
        cout << "\n======= Numerical Methods Console Application =======\n";
        cout << "1. Gauss Elimination\n";
        cout << "2. Gauss-Jordan Elimination\n";
        cout << "4. Bisection Method\n";
        cout << "5. False Position Method\n";
        cout << "6. Newton-Raphson Method\n";
        cout << "7. Secant Method\n";
        cout << "8. Runge-Kutta Method\n";
        cout << "======================================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: gauss(); break;
            case 2: gauss_jordan(); break;
            case 4: bisection(); break;
            case 5: falseposition(); break;
            case 6: newton_raphson(); break;
            case 7: secant(); break;
            case 8: RK(); break;
            case 0: cout << "Goodbye!\n"; return 0;
            default: cout << "Invalid choice. Try again.\n";
        }
    }
}
