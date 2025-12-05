#include <bits/stdc++.h>
using namespace std;


double ODE(double x, double y){
    return x*y + y*y;
}


double RK() {
    ifstream fin("Runge-Kutta Method/input.txt");
    ofstream fout("Runge-Kutta Method/output.txt");

    if(!fin){
        cout << "Error: input.txt not found!" << endl;
        return 0;
    }
    if(!fout){
        cout << "Error: Cannot open output.txt!" << endl;
        return 0;
    }

    double x0, y0, h, x;
    fin >> x0 >> y0 >> h >> x;
    fout << "Initial values: x0 = " << x0
         << ", y0 = " << y0
         << ", step h = " << h
         << ", x = " << x << endl;

    int n = (int)((x - x0) / h);
    double k1, k2, k3, k4, k;

    for(int i = 0; i < n; i++){
        k1 = h * ODE(x0, y0);
        k2 = h * ODE(x0 + h/2, y0 + k1/2);
        k3 = h * ODE(x0 + h/2, y0 + k2/2);
        k4 = h * ODE(x0 + h, y0 + k3);

        k = (k1 + 2*k2 + 2*k3 + k4) / 6.0;
        y0 = y0 + k;
        x0 = x0 + h;

        fout << "Step " << i+1 << ": x = " << fixed << setprecision(6) << x0
             << ", y = " << y0 << endl;
    }

    fout << "\nFinal Result: y(" << x << ") = " << fixed << setprecision(6) << y0 << endl;

    fin.close();
    fout.close();

    return y0;
}

