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

    double xi = 0;
    double yi = 0;
    double xi_xi = 0;
    double xi_yi = 0;
    
    for(int i=0; i<n; i++)
    {
        xi += x[i];
        yi += y[i];
        xi_xi += x[i]*x[i];
        xi_yi += x[i]*y[i];
    }

    double b = ( (n*xi_yi) - xi*yi ) / (n*xi_xi - xi*xi );
    double a = ( yi - b*xi ) / n;
    double ans = a + b*6;
    
    fout<<"\nLinear Equation is y = a + bx"<<endl;
    fout<<"\nfor x = 6, y is "<<ans<<endl;
    fout<<"\nRegression Line is: "<<fixed<<setprecision(2)<<"y = "<<a<<" + "<<b<<"x"<<endl;

    fin.close();
    fout.close();
    return 0;
}
