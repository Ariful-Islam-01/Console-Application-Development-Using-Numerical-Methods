#include <bits/stdc++.h>
using namespace std;

double func(double x){
    return x*x - 4*x - 10;
}

void bisection() {
    ifstream fin("Bi-section Method/input.txt");
    ofstream fout("Bi-section Method/output.txt");

    if (!fin) {
        fout << "Error: input.txt not found!" << endl;
        return;
    }

    double a, b, epsilon;
    fin >> a >> b >> epsilon;  // reading user values from file

    if (func(a) * func(b) >= 0) {
        fout << "Invalid interval!" << endl;
        return;
    }

    double mid;
    while (abs(b - a) >= epsilon) {
        mid = (a + b) / 2.0;

        if (func(mid) == 0)
            break;
        else if (func(a) * func(mid) < 0)
            b = mid;
        else
            a = mid;
    }

    fout << "Root = " << fixed << setprecision(4) << mid << endl;

    fin.close();
    fout.close();
}
