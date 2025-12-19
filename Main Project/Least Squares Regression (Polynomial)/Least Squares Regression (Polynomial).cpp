#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if(!fin){
        cout<<"Error: input.txt not found!"<<endl;
        return 0;
    }
    if(!fout){
        cout<<"Error: Can't open output.txt!"<<endl;
        return 0;
    }
    
    int n, m;
    fin>>n>>m;

    double x[20], y[20];
    double sumX[40] = {0};
    double B[20] = {0};
    double A[20][21] = {0};

    for(int i=0; i<n; i++){
        fin>>x[i];
    }
    for(int i=0; i<n; i++){
        fin>>y[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=2*m; j++){
            sumX[j] += pow(x[i], j);
        }
    }

    for(int i=0; i<=m; i++){
        for(int j=0; j<n; j++){
            B[i] += pow(x[j], i) * y[j];
        }
    }

    for(int i=0; i<=m; i++){
        for(int j=0; j<=m; j++){
            A[i][j] = sumX[i + j];
        }
        A[i][m + 1] = B[i];
    }

    fout<<"\nNumer of Data Points: "<<n<<endl;
    fout<<"\nDegree of Polynomial: "<<m<<endl;

    fout<<"\nNormal Equation (Augmented) Matrix:\n";
    for(int i=0; i<=m; i++){
        for(int j=0; j<=m+1; j++){
            fout<<A[i][j]<<"\t";
        }
        fout<<endl;
    }

    for(int i=0; i<=m; i++){
        for(int j=i+1; j<=m; j++){
            double factor = A[j][i] / A[i][i];
            for(int k=0; k<=m+1; k++){
                A[j][k] -= factor * A[i][k];
            }
        }
    }

    double a[20] = {0};
    for(int i=m; i>=0; i--){
        a[i] = A[i][m + 1];
        for(int j=i+1; j<=m; j++){
            a[i] -= A[i][j] * a[j];
        }
        a[i] /= A[i][i];
    }

    fout<<"\nPolynomial Regression Equation:\n";
    fout<<"y = ";
    for(int i=0; i<=m; i++){
        fout<<a[i];
        if(i!=0) fout<<"x^"<<i;
        if(i!=m) fout<<" + ";
    }
    fout<<endl;

    fin.close();
    fout.close();
    return 0;
}
