#include <bits/stdc++.h>
using namespace std;

double func(double x){
    return 1/(1+x*x);
}

double simpson13(double a, double b, int n){
    double h = (b-a) / n;
    double x[n+1], y[n+1];

    for(int i=0; i<n+1; i++){
        x[i] = a + i*h;
        y[i] = func(x[i]);
    }

    double ans = 0;
    for(int i=0; i<n+1; i++){
        if(i==0 || i==n){
            ans += y[i];
        }
        else if(i%2){
            ans += 4*y[i];
        }
        else{
            ans += 2*y[i];
        }
    }
    ans = ans*(h/3);
    return ans;
}

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

    double a, b;
    int n;
    fin>>a>>b>>n;

    fout<<"\nf(x) = 1 / (1 + x * x)\n"<<"where, lower limit = "<<a<<" , upper limit = "<<b<<" , Number of intervals = "<<n<<endl;
    fout<<"\nThe value of integral: "<<simpson13(a, b, n)<<endl;

    fin.close();
    fout.close();
    return 0;
}
