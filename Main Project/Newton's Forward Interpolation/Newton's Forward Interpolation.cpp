#include <bits/stdc++.h>
using namespace std;

long long fact(int n){
    long long f = 1;
    for(int i = 2; i <= n; i++){
        f *= i;
    }
    return f;
}

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

    int n;
    fin>>n;

    double x[n], y[n][10];

    for(int i = 0; i < n; i++){
        fin>>x[i];
    }

    for(int i = 0; i < n; i++){
        fin>>y[i][0];
    }

    for(int j = 1; j < n; j++){
        for(int i = 0; i < n - j; i++){
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }

    fout<<"\nForward Difference Table:\n";
    for(int i = 0; i < n; i++){
        fout<<x[i]<<"\t";
        for(int j = 0; j < n - i; j++){
            fout<<y[i][j]<<"\t";
        }
        fout<<endl;
    }

    double value;
    fin>>value;

    double h = x[1] - x[0];
    double u = (value - x[0]) / h;

    double sum = y[0][0];
    double u_term = 1;

    for(int i = 1; i < n; i++){
        u_term *= (u - (i - 1));
        sum += (u_term * y[0][i]) / fact(i);
    }

    fout<<"\nInterpolated value at x = " << value << " is " << sum << endl;

    fin.close();
    fout.close();
    return 0;
}
