
#include <bits/stdc++.h>
using namespace std;


void gauss() {
    ifstream fin("Gauss elimination/input.txt");
    ofstream fout("Gauss elimination/output.txt");

    if (!fin) {
        fout << "Error: input file not found!\n";
        return  ;
    }

    int n;
    fin >> n;

    vector<vector<double>> a(n, vector<double>(n + 1));


    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n; j++)
            fin >> a[i][j];


    fout << "Initial Augmented Matrix:\n";
    for (auto &row : a) {
        for (double v : row) fout << setw(10) << v;
        fout << "\n";
    }



    for (int i = 0; i < n; i++) {

        int maxRow = i;
        for (int k = i + 1; k < n; k++)
            if (abs(a[k][i]) > abs(a[maxRow][i]))
                maxRow = k;


        for (int k = i + 1; k < n; k++) {
            double factor = a[k][i] / a[i][i];

            for (int j = i; j <= n; j++)
                a[k][j] -= factor * a[i][j];
        }


        fout << "\nMatrix after step " << i + 1 << ":\n";
        for (auto &row : a) {
            for (double v : row) fout << setw(10) << v;
            fout << "\n";
        }
    }




    vector<double> x(n);
    for (int i = n - 1; i >= 0; i--) {
        x[i] = a[i][n];
        for (int j = i + 1; j < n; j++)
            x[i] -= a[i][j] * x[j];
        x[i] /= a[i][i];


    }

    fout << "\n====== Final Solution ======\n";
    for (int i = 0; i < n; i++)
        fout << "x" << i + 1 << " = " << x[i] << "\n";

    fin.close();
    fout.close();

    return ;
}
