#include <bits/stdc++.h>
using namespace std;

int main()
{
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

    double x[n], y[n];
    for(int i=0; i<n; i++){
        fin>>x[i];
    }
    for(int i=0; i<n; i++){
        fin>>y[i];
    }

    double lnxi = 0;
    double lnyi = 0;
    double lnxi_lnxi = 0;
    double lnxi_lnyi = 0;
    
    for(int i=0; i<n; i++)
    {
        lnxi += log(x[i]);
        lnyi += log(y[i]);
        lnxi_lnxi += log(x[i])*log(x[i]);
        lnxi_lnyi += log(x[i])*log(y[i]);
    }

    double b = ( (n*lnxi_lnyi) - lnxi*lnyi ) / (n*lnxi_lnxi - lnxi*lnxi );
    double lna = ( lnyi - b*lnxi ) / n;
    double a = exp(lna);
    double ans = a * pow(6, b);
    
    fout<<"\nTrascendental Equation is y = ax^b"<<endl;
    fout<<"\nfor x = 6, y is "<<ans<<endl;
    fout<<"\nEquation with the value of a and b is "<<fixed<<setprecision(2)<<"y = "<<a<<"x^("<<b<<")"<<endl;

    fin.close();
    fout.close();
    return 0;
}
