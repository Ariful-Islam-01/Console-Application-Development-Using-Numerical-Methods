#include <bits/stdc++.h>
using namespace std;

void gauss_jordan() {
    ifstream fin("Gausss-Jordan elimination/input.txt");
    ofstream fout("Gausss-Jordan elimination/output.txt");

    if (!fin) {
        fout << "Error: input.txt not found!\n";
        return ;
    }

    int n;
    fin >> n;

    vector<vector<double>> a(n, vector<double>(n + 1));

    fout << "===== Reading Augmented Matrix from input.txt =====\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            fin >> a[i][j];
        }
    }

    fout << "\nInitial Matrix:\n";
    for (auto &row : a) {
        for (double v : row) fout << setw(10) << v;
        fout << "\n";
    }

    fout << "\n===== Gauss–Jordan Elimination Steps =====\n\n";

    for (int i = 0; i < n; i++) {


        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (abs(a[k][i]) > abs(a[maxRow][i]))
                maxRow = k;
        }


        if (maxRow != i) {
            fout << "Pivot change: Row " << i + 1
                 << " swapped with Row " << maxRow + 1 << "\n";
            swap(a[i], a[maxRow]);
        }


        if (a[i][i] == 0) {
            fout << "No unique solution exists (zero pivot on row "
                 << i + 1 << ").\n";
            return ;
        }


        double diagonal = a[i][i];
        fout << "Normalizing Row " << i + 1
             << " (dividing by " << diagonal << ")\n";

        for (int j = 0; j <= n; j++)
            a[i][j] /= diagonal;


        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = a[k][i];
                fout << "Eliminating Row " << k + 1
                     << " using Row " << i + 1
                     << " (factor = " << factor << ")\n";

                for (int j = 0; j <= n; j++)
                    a[k][j] -= factor * a[i][j];
            }
        }


        fout << "\nMatrix after step " << i + 1 << ":\n";
        for (auto &row : a) {
            for (double v : row) fout << setw(10) << v;
            fout << "\n";
        }
        fout << "\n";
    }


    fout << "===== Final Solution =====\n";
    for (int i = 0; i < n; i++)
        fout << "x" << i + 1 << " = " << a[i][n] << "\n";

    fin.close();
    fout.close();

    return ;
}

