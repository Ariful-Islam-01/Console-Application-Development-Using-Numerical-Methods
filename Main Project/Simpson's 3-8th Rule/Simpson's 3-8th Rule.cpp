#include <bits/stdc++.h>
using namespace std;

double func(double x){
    return sqrt(x);
}

double simpson38(double a, double b, int n){
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
        else if(i%3){
            ans += 3*y[i];
        }
        else{
            ans += 2*y[i];
        }
    }
    ans = ans*(3*h/8);
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

    fout<<"\nf(x) = sqrt(x);\n"<<"where, lower limit = "<<a<<" , upper limit = "<<b<<" , Number of intervals = "<<n<<endl;
    fout<<"\nThe value of integral: "<<simpson38(a, b, n)<<endl;

    return 0;
}
