#include <bits/stdc++.h>
using namespace std;

double funcc(double x){
    return 3*x - cos(x) - 1;
}

void falseposition() {

    ifstream fin("False Position Method/input.txt");
    ofstream fout("False Position Method/output.txt");

    if (!fin) {
        fout << "Error: input.txt not found!" << endl;
        return;
    }

    double a, b, epsilon;

    fin >> a >> b >> epsilon;  // read input from file

    if (funcc(a) * funcc(b) >= 0) {
        fout << "Invalid Interval!" << endl;
        return;
    }

    double c;
    while (abs(b - a) >= epsilon) {
        c = a - funcc(a) * ((b - a) / (funcc(b) - funcc(a)));

        if (funcc(c) == 0)
            break;
        else if (funcc(a) * funcc(c) < 0)
            b = c;
        else
            a = c;
    }

    fout << "Root = " << fixed << setprecision(4) << c << endl;

    fin.close();
    fout.close();
}

