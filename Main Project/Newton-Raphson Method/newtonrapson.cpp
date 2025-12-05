
#include <bits/stdc++.h>
using namespace std;

double funccc(double x){
    return 3*x - cos(x) - 1;
}

double dfunc(double x){
    return 3 + sin(x);
}

void newton_raphson() {

    ifstream fin("Newton-Raphson Method/input.txt");
    ofstream fout("Newton-Raphson Method/output.txt");

    if (!fin) {
        fout << "Error: input.txt not found!" << endl;
        return;
    }

    double a, epsilon;

    fin >> a >> epsilon;

    double x0 = a;
    double x1;
    int iter = 0;

    while (true) {

        double fx = funccc(x0);
        double dfx = dfunc(x0);

        if (dfx == 0) {
            fout << "Error: Derivative is zero. Method fails." << endl;
            break;
        }

        x1 = x0 - fx / dfx;
        iter++;

        fout << "Iteration " << iter << " : x = "
             << fixed << setprecision(6) << x1 << endl;

        if (abs(x1 - x0) < epsilon) {
            fout << "\nRoot = " << fixed << setprecision(6) << x1 << endl;
            fout << "Total iterations = " << iter << endl;
            break;
        }

        x0 = x1;
    }

    fin.close();
    fout.close();
}
