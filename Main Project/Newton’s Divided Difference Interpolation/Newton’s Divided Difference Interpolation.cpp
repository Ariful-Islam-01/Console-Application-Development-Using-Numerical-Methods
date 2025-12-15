#include <bits/stdc++.h>
using namespace std;

int main() {
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
    
    int n;
    fin>>n;
    double x[n], y[n][n];

    for(int i=0; i<n; i++){
        fin>>x[i];
    }
    for(int i=0; i<n; i++){
        fin>>y[i][0];
    }

    for(int j=1; j<n; j++){
        for(int i=0; i<n-j; i++){
            y[i][j] = ( y[i+1][j-1] - y[i][j-1] ) / ( x[i+j] - x[i] );
        }
    }
    fout<<"\nDivided Difference Table:\n";
    for(int i=0; i<n; i++){
        fout<<x[i]<<"\t";
        for(int j=0; j<n-i; j++){
            fout<<y[i][j]<<"\t";
        }
        fout<<endl;
    }

    double val;
    fin>>val;

    double sum = y[0][0];
    double term = 1;

    for(int i=1; i<n; i++){
        term *= (val - x[i-1]);
        sum += term*y[0][i];
    }

    fout<<"\nInterpolated value at x = "<<val<<" is "<<sum<<endl;

    fin.close();
    fout.close();
    return 0;
}
