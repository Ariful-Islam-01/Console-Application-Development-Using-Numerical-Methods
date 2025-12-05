
#include <bits/stdc++.h>
using namespace std;

void lu_factorization() {
    ifstream fin("LU factorization/input.txt");
    ofstream fout("LU factorization/output.txt");

    if(!fin){
        cout << "Error: input.txt not found!" << endl;
        return;
    }
    if(!fout){
        cout << "Error: Cannot open output.txt!" << endl;
        return;
    }

    int n;
    fin >> n;

    vector<vector<double>> A(n, vector<double>(n));
    vector<double> B(n);
    vector<vector<double>> L(n, vector<double>(n, 0));
    vector<vector<double>> U(n, vector<double>(n, 0));
    vector<double> X(n);
    vector<double> Y(n);


    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            fin >> A[i][j];


    for(int i=0; i<n; i++)
        fin >> B[i];


    for(int i=0; i<n; i++){
        for(int k=i; k<n; k++){
            double sum = 0;
            for(int j=0; j<i; j++) sum += L[i][j]*U[j][k];
            U[i][k] = A[i][k] - sum;
        }
        L[i][i] = 1;
        for(int k=i+1; k<n; k++){
            double sum = 0;
            for(int j=0; j<i; j++) sum += L[k][j]*U[j][i];
            L[k][i] = (A[k][i] - sum)/U[i][i];
        }
    }


    for(int i=0; i<n; i++){
        double sum = 0;
        for(int j=0; j<i; j++) sum += L[i][j]*Y[j];
        Y[i] = B[i] - sum;
    }


    for(int i=n-1; i>=0; i--){
        double sum = 0;
        for(int j=i+1; j<n; j++) sum += U[i][j]*X[j];
        X[i] = (Y[i] - sum)/U[i][i];
    }


    fout << "L matrix:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) fout << L[i][j] << " ";
        fout << endl;
    }
    fout << endl;


    fout << "U matrix:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) fout << U[i][j] << " ";
        fout << endl;
    }
    fout << endl;


    fout << "Y vector:" << endl;
    for(int i=0; i<n; i++) fout << Y[i] << endl;
    fout << endl;


    bool infinite = false, nosolution = false;
    for(int i=0; i<n; i++){
        bool allzero = true;
        for(int j=0; j<n; j++){
            if(abs(U[i][j]) > 1e-9){
                allzero = false;
                break;
            }
        }
        if(allzero){
            if(abs(Y[i]) > 1e-9) nosolution = true;
            else infinite = true;
        }
    }
    if(infinite) fout << "Infinite Solutions" << endl;
    else if(nosolution) fout << "No Solution" << endl;
    else{
        fout << "Unique Solutions:" << endl;
        for(int i=0; i<n; i++) fout << "x" << i+1 << " = " << X[i] << endl;
    }

    fin.close();
    fout.close();
}
