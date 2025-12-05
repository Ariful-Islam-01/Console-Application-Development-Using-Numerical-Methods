
#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;


void getCofactor(double A[MAX][MAX], double temp[MAX][MAX], int p, int q, int n) {
    int i = 0, j = 0;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = A[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}


double determinant(double A[MAX][MAX], int n) {
    if (n == 1)
        return A[0][0];

    double temp[MAX][MAX];
    double det = 0;
    int sign = 1;

    for (int col = 0; col < n; col++) {
        getCofactor(A, temp, 0, col, n);
        det += sign * A[0][col] * determinant(temp, n - 1);
        sign = -sign;
    }
    return det;
}


void adjoint(double A[MAX][MAX], double adj[MAX][MAX], int n) {
    if (n == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign;
    double temp[MAX][MAX];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            getCofactor(A, temp, i, j, n);
            sign = ( (i + j) % 2 == 0 ) ? 1 : -1;

            adj[j][i] = sign * determinant(temp, n - 1);
        }
    }
}


void matrix_inverse() {
    ifstream fin("Matrix Inversion Method/input.txt");
    ofstream fout("Matrix Inversion Method/output.txt");

    if(!fin) {
        fout << "Error: input.txt not found!" << endl;
        return;
    }

    int n;
    fin >> n;

    double A[MAX][MAX], inv[MAX][MAX];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fin >> A[i][j];

    double det = determinant(A, n);

    if (det == 0) {
        fout << "Inverse does not exist (determinant = 0)" << endl;
        return;
    }

    double adj[MAX][MAX];
    adjoint(A, adj, n);


    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inv[i][j] = adj[i][j] / det;

    fout << "Inverse Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            fout << fixed << setprecision(3) << inv[i][j] << " ";
        fout << "\n";
    }

    fin.close();
    fout.close();
}
