#include <bits/stdc++.h>
using namespace std;

double fun(double x){
    return 3*x - cos(x) - 1;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if(!fin){
        cout << "Error: input.txt not found!" << endl;
        return;
    }
    if(!fout){
        cout << "Error: Cannot open output.txt!" << endl;
        return;
    }

    double a, b, c;
    fin >> a >> b;

    double epsilon = 0.0001;
    int iter = 0;


    if(fun(a) == 0){
        fout << "Root is : " << a << " after " << iter+1 << " iterations" << endl;
        return;
    }
    if(fun(b) == 0){
        fout << "Root is : " << b << " after " << iter+1 << " iterations" << endl;
        return;
    }


    while(abs(b - a) >= epsilon){
        c = b - (fun(b)*(b-a)) / (fun(b)-fun(a));
        a = b;
        b = c;
        iter++;
        fout << "Iteration " << iter << " : x = "
             << fixed << setprecision(6) << c << endl;
    }

    fout << "\nRoot is : " << fixed << setprecision(6) << c
         << " after " << iter+1 << " iterations" << endl;

    fin.close();
    fout.close();
    return 0;
}

