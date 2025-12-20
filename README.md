
# Console Application Development Using Numerical Methods

---

## Table of Contents


- [Project Overview](#project-overview)

- [Methods Implemented](#methods-implemented)

  - **[Solution of Linear Equations](#solution-of-linear-equations)**

    <details>
    <summary><strong>Gauss Elimination Method</strong></summary>

    - [Theory](#gauss-elimination-theory)
    - [Code](#gauss-elimination-code)
    - [Input](#gauss-elimination-input)
    - [Output](#gauss-elimination-output)

    </details>

    <details>
    <summary><strong>Gauss Jordan Elimination Method</strong></summary>

    - [Theory](#gauss-jordan-theory)
    - [Code](#gauss-jordan-code)
    - [Input](#gauss-jordan-input)
    - [Output](#gauss-jordan-output)

    </details>

    <details>
    <summary><strong>LU Decomposition Method</strong></summary>

    - [Theory](#lu-decomposition-theory)
    - [Code](#lu-decomposition-code)
    - [Input](#lu-decomposition-input)
    - [Output](#lu-decomposition-output)

    </details>

    <details>
    <summary><strong>Matrix Inversion Method</strong></summary>

    - [Theory](#matrix-inversion-theory)
    - [Code](#matrix-inversion-code)
    - [Input](#matrix-inversion-input)
    - [Output](#matrix-inversion-output)

    </details>

  - **[Solution of Non-linear Equations](#solution-of-non-linear-equations)**

    <details>
    <summary><strong>Bisection Method</strong></summary>

    - [Theory](#bisection-theory)
    - [Code](#bisection-code)
    - [Input](#bisection-input)
    - [Output](#bisection-output)

    </details>

    <details>
    <summary><strong>False Position Method</strong></summary>

    - [Theory](#false-position-theory)
    - [Code](#false-position-code)
    - [Input](#false-position-input)
    - [Output](#false-position-output)

    </details>

    <details>
    <summary><strong>Secant Method</strong></summary>

    - [Theory](#secant-theory)
    - [Code](#secant-code)
    - [Input](#secant-input)
    - [Output](#secant-output)

    </details>

    <details>
    <summary><strong>Newton-Raphson Method</strong></summary>

    - [Theory](#newton-raphson-theory)
    - [Code](#newton-raphson-code)
    - [Input](#newton-raphson-input)
    - [Output](#newton-raphson-output)

    </details>

  - **[Solution of Differential Equations](#solution-of-differential-equations)**

    <details>
    <summary><strong>Runge-Kutta Method</strong></summary>

    - [Theory](#runge-kutta-theory)
    - [Code](#runge-kutta-code)
    - [Input](#runge-kutta-input)
    - [Output](#runge-kutta-output)

    </details>

  - **[Interpolation and Approximation](#interpolation-and-approximation)**

    <details>
    <summary><strong>Newton Forward Interpolation</strong></summary>

    - [Theory](#newton-forward-theory)
    - [Code](#newton-forward-code)
    - [Input](#newton-forward-input)
    - [Output](#newton-forward-output)

    </details>

    <details>
    <summary><strong>Newton Backward Interpolation</strong></summary>

    - [Theory](#newton-backward-theory)
    - [Code](#newton-backward-code)
    - [Input](#newton-backward-input)
    - [Output](#newton-backward-output)

    </details>

    <details>
    <summary><strong>Newton Divided Difference Interpolation</strong></summary>

    - [Theory](#newton-divided-theory)
    - [Code](#newton-divided-code)
    - [Input](#newton-divided-input)
    - [Output](#newton-divided-output)

    </details>

  - **[Numerical Integration](#numerical-integration)**

    <details>
    <summary><strong>Simpson’s 1/3rd Rule</strong></summary>

    - [Theory](#simpson-one-third-theory)
    - [Code](#simpson-one-third-code)
    - [Input](#simpson-one-third-input)
    - [Output](#simpson-one-third-output)

    </details>

    <details>
    <summary><strong>Simpson’s 3/8th Rule</strong></summary>

    - [Theory](#simpson-three-eighth-theory)
    - [Code](#simpson-three-eighth-code)
    - [Input](#simpson-three-eighth-input)
    - [Output](#simpson-three-eighth-output)

    </details>

  - **[Numerical Differentiation](#numerical-differentiation)**

    <details>
    <summary><strong>Forward Interpolation Differentiation</strong></summary>

    - [Theory](#forward-diff-theory)
    - [Code](#forward-diff-code)
    - [Input](#forward-diff-input)
    - [Output](#forward-diff-output)

    </details>

    <details>
    <summary><strong>Backward Interpolation Differentiation</strong></summary>

    - [Theory](#backward-diff-theory)
    - [Code](#backward-diff-code)
    - [Input](#backward-diff-input)
    - [Output](#backward-diff-output)

    </details>

  - **[Curve Fitting Regression](#curve-fitting-regression)**

    <details>
    <summary><strong>Least Squares Regression (Linear)</strong></summary>

    - [Theory](#ls-linear-theory)
    - [Code](#ls-linear-code)
    - [Input](#ls-linear-input)
    - [Output](#ls-linear-output)

    </details>

    <details>
    <summary><strong>Least Squares Regression (Transcendental)</strong></summary>

    - [Theory](#ls-trans-theory)
    - [Code](#ls-trans-code)
    - [Input](#ls-trans-input)
    - [Output](#ls-trans-output)

    </details>

    <details>
    <summary><strong>Least Squares Regression (Polynomial)</strong></summary>

    - [Theory](#ls-poly-theory)
    - [Code](#ls-poly-code)
    - [Input](#ls-poly-input)
    - [Output](#ls-poly-output)

    </details>
    
- [Contributors](#contributors)

---

## Project Overview

This project is a **Console-Based Numerical Methods Application** developed as part of an academic group project under the **Department of Computer Science and Engineering (CSE), KUET**.  

The application demonstrates the practical implementation of fundamental numerical techniques used to solve **linear and non-linear equations, differential equations, interpolation, numerical integration, numerical differentiation, and curve fitting problems**.

Each numerical method is presented in a structured manner including **theory, source code, sample input, and corresponding output**, ensuring both conceptual clarity and implementation understanding.

### Structure of Each Method :
Each numerical method in the application consists of the following four components:

1. **Theory** – Mathematical background and explanation  
2. **Code** – Algorithmic implementation  
3. **Input** – User-provided data  
4. **Output** – Computed numerical result  

### Execution Flow :

1. User provides required inputs from input file
2. Algorithm executes
3. Output is stored in the output file   

### Input and Output Format :
- **Input:** Numerical values, matrices, initial guesses, step size, or data points  
- **Output:** Approximate solution and final result  

All interactions are performed via input and output file.

### Technologies Used :
- **Programming Language:** C / C++  
- **Compiler:** GCC / g++  
- **Development Environment:** Code::Blocks / VS Code  
- **Platform:** Windows / Linux  

[⬆](#table-of-contents)

---

## Methods Implemented

### Solution of Linear Equations

### Gauss Elimination Method

#### Gauss Elimination Theory


Gauss Elimination is a direct numerical method used to solve a system of linear equations. This method transforms the system into an **upper triangular matrix** using **forward elimination**, after which the unknown variables are calculated using **back substitution**.

**Gauss Elimination Procedure:**

A system of `n` linear equations with `n` unknowns can be written as:

$$
\begin{aligned}
a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n &= b_1 \\
a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n &= b_2 \\
\vdots \\
a_{n1}x_1 + a_{n2}x_2 + \cdots + a_{nn}x_n &= b_n
\end{aligned}
$$

This system can be represented as an **augmented matrix**:

$$
\left[
\begin{array}{cccc|c}
a_{11} & a_{12} & \cdots & a_{1n} & b_1 \\
a_{21} & a_{22} & \cdots & a_{2n} & b_2 \\
\vdots & \vdots & \ddots & \vdots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nn} & b_n
\end{array}
\right]
$$

**Forward Elimination:** Transform the matrix into an **upper triangular form** by eliminating the lower triangular entries using row operations.

**Back Substitution:** After obtaining the upper triangular matrix, solve for the unknowns starting from the last equation upwards.

**Input Format :**

- The first line contains an integer $$n$$, the number of equations.
- The next $$n$$ lines contain $$n+1$$ real numbers each.
- Each line represents one row of the augmented matrix.

$$
\begin{aligned}
n \\
a_{11}\ a_{12}\ \cdots\ a_{1n}\ b_1 \\
a_{21}\ a_{22}\ \cdots\ a_{2n}\ b_2 \\
\vdots \\
a_{n1}\ a_{n2}\ \cdots\ a_{nn}\ b_n
\end{aligned}
$$

**Output Format :**

- The **initial augmented matrix** is displayed.
- The **matrix after each elimination step** is printed.
- Finally, the **solution of the system** is shown as:

$$
x_1 = value,\quad x_2 = value,\quad \ldots,\quad x_n = value
$$

[⬆](#table-of-contents)

#### Gauss Elimination Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin) {
        fout << "Error: input file not found!\n";
        return 0;
    }

    int n;
    fin >> n;

    vector<vector<double>> a(n, vector<double>(n + 1));

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n; j++)
            fin >> a[i][j];

    fout << "Initial Augmented Matrix:\n";
    for (auto &row : a) {
        for (double v : row) fout << setw(10) << v;
        fout << "\n";
    }

    for (int i = 0; i < n; i++) {
        int maxRow = i;
        for (int k = i + 1; k < n; k++)
            if (abs(a[k][i]) > abs(a[maxRow][i]))
                maxRow = k;

        swap(a[i], a[maxRow]);

        if (abs(a[i][i]) < 1e-9) {
            fout << "No unique solution exists\n";
            return 0;
        }

        for (int k = i + 1; k < n; k++) {
            double factor = a[k][i] / a[i][i];
            for (int j = i; j <= n; j++)
                a[k][j] -= factor * a[i][j];
        }

        fout << "\nMatrix after step " << i + 1 << ":\n";
        for (auto &row : a) {
            for (double v : row) fout << setw(10) << v;
            fout << "\n";
        }
    }

    vector<double> x(n);
    for (int i = n - 1; i >= 0; i--) {
        x[i] = a[i][n];
        for (int j = i + 1; j < n; j++)
            x[i] -= a[i][j] * x[j];
        x[i] /= a[i][i];
    }

    fout << "\n Final Solution \n";
    for (int i = 0; i < n; i++)
        fout << "x" << i + 1 << " = " << x[i] << "\n";

    return 0;
}

```

[⬆](#table-of-contents)

#### Gauss Elimination Input
```
3
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3

```

[⬆](#table-of-contents)

#### Gauss Elimination Output
```
Initial Augmented Matrix:
         2         1        -1         8
        -3        -1         2       -11
        -2         1         2        -3

Matrix after step 1:
        -3        -1         2       -11
         0  0.333333  0.333333  0.666667
         0   1.66667  0.666667   4.33333

Matrix after step 2:
        -3        -1         2       -11
         0   1.66667  0.666667   4.33333
         0         0       0.2      -0.2

Matrix after step 3:
        -3        -1         2       -11
         0   1.66667  0.666667   4.33333
         0         0       0.2      -0.2

Final Solution
x1 = 2
x2 = 3
x3 = -1

```

[⬆](#table-of-contents)

---  
### Gauss Jordan Elimination Method

#### Gauss Jordan Theory
Gauss–Jordan Elimination is a numerical method used to solve a system of linear equations.
It converts the augmented matrix of the system into **Reduced Row Echelon Form (RREF)**,
where the coefficient matrix becomes an identity matrix and the solution is obtained
directly from the last column.

**Mathematical Formulation**

A system of `n` linear equations with `n` unknowns is given by:

$$
\begin{aligned}
a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n &= b_1 \\
a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n &= b_2 \\
\vdots \\
a_{n1}x_1 + a_{n2}x_2 + \cdots + a_{nn}x_n &= b_n
\end{aligned}
$$

This system can be represented in augmented matrix form as:

$$
\left[
\begin{array}{cccc|c}
a_{11} & a_{12} & \cdots & a_{1n} & b_1 \\
a_{21} & a_{22} & \cdots & a_{2n} & b_2 \\
\vdots & \vdots & \ddots & \vdots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nn} & b_n
\end{array}
\right]
$$

**Gauss–Jordan Elimination Procedure**

1. Select a non-zero pivot element in the current column.
2. Interchange rows if necessary to bring the pivot to the diagonal position.
3. Divide the entire pivot row by the pivot element to make the pivot equal to 1.
4. Use row operations to eliminate all other elements in the pivot column.
5. Repeat the steps until the coefficient matrix becomes an identity matrix.

After completion, the matrix becomes:

$$
\left[
\begin{array}{cccc|c}
1 & 0 & 0 & \cdots & x_1 \\
0 & 1 & 0 & \cdots & x_2 \\
0 & 0 & 1 & \cdots & x_3 \\
\vdots & \vdots & \vdots & \ddots & \vdots \\
0 & 0 & 0 & \cdots & x_n
\end{array}
\right]
$$

**Input Format**

- The first line contains an integer $$n$$, the number of equations.
- The next $$n$$ lines contain $$n+1$$ real numbers each.
- Each row represents the coefficients of the variables followed by the constant term.

$$
\begin{aligned}
n \\
a_{11}\ a_{12}\ \cdots\ a_{1n}\ b_1 \\
a_{21}\ a_{22}\ \cdots\ a_{2n}\ b_2 \\
\vdots \\
a_{n1}\ a_{n2}\ \cdots\ a_{nn}\ b_n
\end{aligned}
$$

**Output Format**

- The initial augmented matrix is displayed.
- The augmented matrix after each Gauss–Jordan elimination step is printed.
- The final solution of the system is shown as:

$$
x_1 = value,\quad x_2 = value,\quad \ldots,\quad x_n = value
$$

[⬆](#table-of-contents)

#### Gauss Jordan Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    vector<vector<double>> a(n, vector<double>(n + 1));
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n; j++){
            fin >> a[i][j];
        }
    }

    fout << fixed << setprecision(6);

    fout << "Initial Augmented Matrix:\n";
    for(auto &row : a){
        for(double v : row)
            fout << setw(10) << v;
        fout << "\n";
    }

    for(int i = 0; i < n; i++){

        int maxRow = i;
        for(int k = i + 1; k < n; k++){
            if(fabs(a[k][i]) > fabs(a[maxRow][i]))
                maxRow = k;
        }
        swap(a[i], a[maxRow]);

        double pivot = a[i][i];
        if(fabs(pivot) < 1e-12) return 0;

        for(int j = 0; j <= n; j++)
            a[i][j] /= pivot;

        for(int k = 0; k < n; k++){
            if(k != i){
                double factor = a[k][i];
                for(int j = 0; j <= n; j++)
                    a[k][j] -= factor * a[i][j];
            }
        }

        fout << "\nMatrix after step " << i + 1 << ":\n";
        for(auto &row : a){
            for(double v : row)
                fout << setw(10) << v;
            fout << "\n";
        }
    }

    fout << "\nFinal Solution:\n";
    for(int i = 0; i < n; i++){
        fout << "x" << i + 1 << " = " << a[i][n] << "\n";
    }

    fin.close();
    fout.close();
    return 0;
}

```

[⬆](#table-of-contents)

#### Gauss Jordan Input
```
3
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3

```

[⬆](#table-of-contents)

#### Gauss Jordan Output
```
Initial Augmented Matrix:
  2.000000  1.000000 -1.000000  8.000000
 -3.000000 -1.000000  2.000000-11.000000
 -2.000000  1.000000  2.000000 -3.000000

Matrix after step 1:
  1.000000  0.333333 -0.666667  3.666667
  0.000000  0.333333  0.333333  0.666667
  0.000000  1.666667  0.666667  4.333333

Matrix after step 2:
  1.000000  0.000000 -0.800000  2.800000
  0.000000  1.000000  0.400000  2.600000
  0.000000  0.000000  0.200000 -0.200000

Matrix after step 3:
  1.000000  0.000000  0.000000  2.000000
  0.000000  1.000000  0.000000  3.000000
  0.000000  0.000000  1.000000 -1.000000

Final Solution:
x1 = 2.000000
x2 = 3.000000
x3 = -1.000000

```

[⬆](#table-of-contents)

---
### LU Decomposition Method

#### LU Decomposition Theory

LU Factorization (or LU Decomposition) is a numerical technique used to solve a system of linear equations. It decomposes a square matrix $$A$$ into the product of a **Lower triangular matrix** $$L$$ and an **Upper triangular matrix** $$U$$, such that:

For a system of `n` equations:

$$
\begin{aligned}
a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n &= b_1 \\
a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n &= b_2 \\
\vdots \\
a_{n1}x_1 + a_{n2}x_2 + \cdots + a_{nn}x_n &= b_n
\end{aligned}
$$

The matrix $$A$$ can be decomposed as:

$$
A = 
\left[ 
\begin{array}{cccc} 
a_{11} & a_{12} & \cdots & a_{1n} \\ 
a_{21} & a_{22} & \cdots & a_{2n} \\ 
\vdots & \vdots & \ddots & \vdots \\ 
a_{n1} & a_{n2} & \cdots & a_{nn} 
\end{array} 
\right]
= L \cdot U
$$

Once the decomposition is done, the system:

$$
A \cdot X = B
$$

It can be solved in two steps:

- Solve $$L \cdot Y = B$$ for $$Y$$ using **forward substitution**:


- Solve $$U \cdot X = Y$$ for $$X$$ using **back substitution**:

**Input Format**

- The first line contains an integer \(t\), the number of test cases.
- For each test case:
  - The first line contains an integer \(n\), the number of equations.
  - The next \(n\) lines contain \(n+1\) real numbers followed by the RHS value (augmented matrix).

The input can be represented as:

$$
\begin{aligned}
t \\
n_1 \\
a_{11} & a_{12} & \cdots & a_{1n} & b_1 \\
a_{21} & a_{22} & \cdots & a_{2n} & b_2 \\
\vdots & \vdots & \ddots & \vdots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nn} & b_n \\
n_2 \\
a_{11} & a_{12} & \cdots & a_{1n} & b_1 \\
\vdots & & & & \\
\end{aligned}
$$

**Output Format**

- **L matrix** (lower triangular with 1s on diagonal)  
- **U matrix** (upper triangular)  
- **Y vector** (solution of $$L \cdot Y = B$$)  
- **X vector** (solution of $$U \cdot X = Y$$)  

**If no solution or infinite solutions exist**, the program will display:

$$
\text{No Solution} \quad \text{or} \quad \text{Infinite Solutions}
$$

Otherwise, the unique solution is displayed as:

$$
x_1 = value,\quad x_2 = value,\quad \ldots,\quad x_n = value
$$

[⬆](#table-of-contents)

#### LU Decomposition Code
```cpp
#include <bits/stdc++.h>
using namespace std;

void LUX(vector<vector<double>>& a, int n, vector<double>& b, ofstream &fout, int tc) {
    vector<vector<double>> u(n, vector<double>(n));
    vector<vector<double>> l(n, vector<double>(n, 0));

    fout << "Test Case " << tc :<< "\n\n";
    fout << "Original Matrix A:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            fout << a[i][j] << " ";
        fout << endl;
    }
    fout << endl;

    for(int i = 0; i < n; i++) {
        for(int k = i; k < n; k++) {
            double sum = 0;
            for(int j = 0; j < i; j++)
                sum += l[i][j] * u[j][k];
            u[i][k] = a[i][k] - sum;
        }
        for(int k = i; k < n; k++) {
            if(i == k) l[k][i] = 1;
            double sum = 0;
            for(int j = 0; j < i; j++)
                sum += l[k][j] * u[j][i];
            if(u[i][i] != 0)
                l[k][i] = (a[k][i] - sum) / u[i][i];
        }
    }

    fout << "U matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            fout << u[i][j] << " ";
        fout << endl;
    }
    fout << endl;

    fout << "L matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            fout << l[i][j] << " ";
        fout << endl;
    }
    fout << endl;

    vector<double> y(n);
    for(int i = 0; i < n; i++) {
        double sum = 0;
        for(int j = 0; j < i; j++)
            sum += l[i][j] * y[j];
        y[i] = b[i] - sum;
    }

    fout << "Y vector:\n";
    for(int i = 0; i < n; i++)
        fout << y[i] << endl;
    fout << endl;

    vector<double> x(n);
    for(int i = n - 1; i >= 0; i--) {
        double sum = 0;
        for(int j = i + 1; j < n; j++)
            sum += u[i][j] * x[j];
        if(u[i][i] != 0)
            x[i] = (y[i] - sum) / u[i][i];
    }

    if(u[n-1][n-1] == 0) {
        if(y[n-1] == 0)
            fout << "Infinite solution\n";
        else
            fout << "No solution\n";
    } else {
        fout << "X vector (Solution):\n";
        for(int i = 0; i < n; i++)
            fout << x[i] << " ";
        fout << endl;
    }
    
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if(!fin || !fout) return 0;

    int t;
    fin >> t; 
    for(int tc = 1; tc <= t; tc++) {
        int n;
        fin >> n;
        vector<vector<double>> a(n, vector<double>(n));
        vector<double> b(n);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                fin >> a[i][j];
            fin >> b[i];
        }

        LUX(a, n, b, fout, tc);
    }

    fin.close();
    fout.close();
    return 0;
}

```
[⬆](#table-of-contents)

#### LU Decomposition Input
```
3
3
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3
3
1 2 -1 3
2 4 -2 6
-1 -2 1 -3
3
1 2 -1 3
2 4 -2 6
-1 -2 1 0

```

[⬆](#table-of-contents)

#### LU Decomposition Output
```
 Test Case 1 

Original Matrix A:
2 1 -1 
-3 -1 2 
-2 1 2 

U matrix:
2 1 -1 
0 0.5 0.5 
0 0 -1 

L matrix:
1 0 0 
-1.5 1 0 
-1 4 1 

Y vector:
8
1
1

X vector (Solution):
2 3 -1

 Test Case 2 

Original Matrix A:
1 2 -1 
2 4 -2 
-1 -2 1 

U matrix:
1 2 -1 
0 0 0 
0 0 0 

L matrix:
1 0 0 
2 1 0 
-1 0 1 

Y vector:
3
0
0

Infinite solution

 Test Case 3 

Original Matrix A:
1 2 -1 
2 4 -2 
-1 -2 1 

U matrix:
1 2 -1 
0 0 0 
0 0 0 

L matrix:
1 0 0 
2 1 0 
-1 0 1 

Y vector:
3
0
3

No solution

```

[⬆](#table-of-contents)

---  
### Matrix Inversion

#### Matrix Inversion Theory
Matrix Inversion is a numerical method used to solve a system of linear equations of the form:

$$
A \cdot X = B
$$

where  
- \(A\) is the coefficient matrix  
- \(X\) is the vector of unknowns  
- \(B\) is the constant vector  

If the inverse of matrix \(A\) exists, the solution is:

$$
X = A^{-1} \cdot B
$$

**Condition for Inverse**

The inverse of a square matrix exists only if its determinant is non-zero:

$$
\det(A) \neq 0
$$

If $$\det(A) = 0$$, the matrix is singular and the system has either **no solution** or **infinitely many solutions**.

**Determinant**

The determinant of a matrix is calculated using cofactor expansion:

$$
\det(A) = \sum_{j=1}^{n} (-1)^{1+j} a_{1j} \cdot \det(M_{1j})
$$

**Cofactor**

The cofactor of an element \(a_{ij}\) is defined as:

$$
C_{ij} = (-1)^{i+j} \cdot \det(M_{ij})
$$

**Adjoint Matrix**

The adjoint of a matrix is the transpose of the cofactor matrix:

$$
\text{adj}(A) = [C_{ij}]^T
$$

**Inverse Matrix**

The inverse of matrix \(A\) is given by:

$$
A^{-1} = \frac{1}{\det(A)} \cdot \text{adj}(A)
$$

**Solving the System Using Inverse Matrix**

Given:

$$
A \cdot X = B
$$

Multiplying both sides by \(A^{-1}\):

$$
X = A^{-1} \cdot B
$$

This method provides a **unique solution** only when $$\det(A) \neq 0$$.


**Augmented Matrix Representation**

The system is provided as an augmented matrix:

$$
[A|B] =
\begin{bmatrix}
a_{11} & a_{12} & \cdots & a_{1n} & b_1 \\
a_{21} & a_{22} & \cdots & a_{2n} & b_2 \\
\vdots & \vdots & \ddots & \vdots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nn} & b_n
\end{bmatrix}
$$

- First \(n\) columns represent matrix \(A\)
- Last column represents vector \(B\)

**Input Format**

- First line: integer T (number of test cases)
- For each test case:
- First line: integer n (order of the matrix)
- Next n lines: n + 1 real numbers representing the augmented matrix (coefficients and constants)

**Output Format**

- For each test case, the program outputs:
- The inverse matrix (rounded to 3 decimal places)
- The solution of the system of linear equations
- If the determinant is zero, a message indicating no unique solution

[⬆](#table-of-contents)

#### Matrix Inversion Code
```cpp
#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;

void getCofactor(double A[MAX][MAX], double temp[MAX][MAX], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
        for (int col = 0; col < n; col++)
            if (row != p && col != q) {
                temp[i][j++] = A[row][col];
                if (j == n - 1) { j = 0; i++; }
            }
}

double determinant(double A[MAX][MAX], int n) {
    if (n == 1) return A[0][0];
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
    if (n == 1) { adj[0][0] = 1; return; }
    int sign;
    double temp[MAX][MAX];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            getCofactor(A, temp, i, j, n);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp, n - 1);
        }
}

bool matrix_inverse(double A[MAX][MAX], int n, double inv[MAX][MAX], ofstream &fout) {
    double det = determinant(A, n);
    if (det == 0) {
        fout << "No unique solution (determinant = 0)\n";
        return false;
    }
    double adj[MAX][MAX];
    adjoint(A, adj, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inv[i][j] = adj[i][j] / det;
    fout << fixed << setprecision(3) << "Inverse Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) fout << inv[i][j] << " ";
        fout << "\n";
    }
    return true;
}

void solve_system(double inv[MAX][MAX], double B[MAX], int n, ofstream &fout) {
    double X[MAX] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            X[i] += inv[i][j] * B[j];
    fout << "Solution:\n";
    char var = 'x';
    for (int i = 0; i < n; i++)
        fout << var++ << " = " << X[i] << "\n";
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (!fin || !fout) return 0;
    int T;
    fin >> T;
    for (int t = 1; t <= T; t++) {
        int n;
        fin >> n;
        double A[MAX][MAX], B[MAX], inv[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                fin >> A[i][j];
            fin >> B[i];
        }
        fout << "Test case #" << t << ":\n";
        if (matrix_inverse(A, n, inv, fout)) {
            solve_system(inv, B, n, fout);
        }
        fout << "\n";
    }
    fin.close();
    fout.close();
    return 0;
}
```

[⬆](#table-of-contents)

#### Matrix Inversion Input
```
3
3
2 1 1 5
1 3 2 7
1 0 0 1
3
1 2 3 6
2 4 6 12
3 6 9 18
3
1 2 3 6
2 4 6 2
3 6 9 7

```

[⬆](#table-of-contents)

#### Matrix Inversion Output
```
Test case #1:
Inverse Matrix:
-0.000 0.000 1.000 
-2.000 1.000 3.000 
3.000 -1.000 -5.000 
Solution:
x = 1.000
y = 0.000
z = 3.000

Test case #2:
No unique solution (determinant = 0)

Test case #3:
No unique solution (determinant = 0)

```  

[⬆](#table-of-contents)

---

### Solution of Non-linear Equations

### Bisection Method

#### Bisection Theory
The Bisection Method is a numerical technique used to determine the root of a
non-linear equation of the form `f(x) = 0`. This method is applicable when the
function is continuous in a given interval and the values of the function at
the endpoints have opposite signs.

Let the initial guesses be  
\( a \) and \( b \), such that

$$
f(a)\cdot f(b) < 0
$$

This condition ensures that at least one real root exists in the interval
\( [a, b] \), according to the Intermediate Value Theorem.

The midpoint of the interval is computed as:

$$
c = \frac{a + b}{2}
$$

The function value at the midpoint is then evaluated.

If

$$
f(c) = 0
$$

then \( c \) is the exact root of the equation.

If

$$
f(a)\cdot f(c) < 0
$$

the root lies in the interval \( [a, c] \).

If

$$
f(c)\cdot f(b) < 0
$$

the root lies in the interval \( [c, b] \).

The interval containing the root is repeatedly reduced by replacing either
\( a \) or \( b \) with \( c \). This process is continued until the length of
the interval becomes sufficiently small.

The stopping criterion is generally given by:

$$
|b - a| < \varepsilon
$$

where $$\( \varepsilon \)$$ is the prescribed tolerance.

The Bisection Method is simple, reliable, and always convergent, although its
rate of convergence is relatively slow compared to other numerical methods.


**Input Format**
- The first line contains two real numbers:  
     ```
     L R
     ```  
       
   - The function $f(x)$ **must change sign** in the interval $[L, R]$, i.e., $f(L) \cdot f(R) < 0$.
- The second line contains the allowed error (tolerance)


**Output Format** 
- All real roots of the function lying within the interval  
  [L, R]
  are displayed.

- For each root, the corresponding **sub-interval** and the **approximate root value** are shown.

[⬆](#table-of-contents)

#### Bisection Code
```cpp
#include <bits/stdc++.h>
using namespace std;

double func(double x){
    return x*x - 4*x - 10;
}

double bisection(double a, double b, double eps){
    double mid;
    while(fabs(b - a) >= eps){
        mid = (a + b) / 2.0;
        if(func(a) * func(mid) < 0)
            b = mid;
        else
            a = mid;
    }
    return (a + b) / 2.0;
}

int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    double L, R, eps;
    fin >> L >> R >> eps;

    fout << "Given Function: f(x) = x^2 - 4x - 10\n";
    fout << "Order (Degree) of the function: 2\n\n";
    fout << "Search Interval: [" << L << ", " << R << "]\n";
    fout << "Allowed Error (epsilon): " << eps << "\n\n";
    fout << "Roots found:\n";

    int root_no = 1;

    for(double i = L; i < R; i++){
        if(func(i) * func(i + 1) < 0){
            double root = bisection(i, i + 1, eps);
            fout << "Root " << root_no
                 << " lies in interval [" << i << ", " << i + 1 << "] = "
                 << fixed << setprecision(6) << root << "\n";
            root_no++;
        }
    }

    fin.close();
    fout.close();
    return 0;
}

```

[⬆](#table-of-contents)

#### Bisection Input
```
-10 10
0.0001
```

[⬆](#table-of-contents)

#### Bisection Output
```
Given Function: f(x) = x^2 - 4x - 10
Order (Degree) of the function: 2

Search Interval: [-10, 10]
Allowed Error (epsilon): 0.0001

Roots found:
Root 1 lies in interval [-2, -1] = -1.741657
Root 2 lies in interval [5, 6] = 5.741657
```

[⬆](#table-of-contents)

---
### False Position Method

#### False Position Theory
The **Regular False Position Method** is a numerical technique used to determine the root of a non-linear equation of the form `f(x) = 0`. This method is applicable when the function is continuous in a given interval and the values of the function at the endpoints have opposite signs.

Let the initial guesses be  
\( a \) and \( b \), such that

$$
f(a)\cdot f(b) < 0
$$

This condition ensures that at least one real root exists in the interval \( [a, b] \), according to the Intermediate Value Theorem.

The root is approximated using the formula:

$$
c = b - f(b) \frac{b - a}{f(b) - f(a)}
$$

Here, \( c \) is the point where the straight line joining \( (a, f(a)) \) and \( (b, f(b)) \) intersects the x-axis.

Next, the function value at \( c \) is evaluated:

- If 

$$
f(c) = 0
$$

then \( c \) is the exact root of the equation.

- If

$$
f(a)\cdot f(c) < 0
$$

the root lies in the interval \( [a, c] \), so \( b \) is replaced with \( c \).

- If

$$
f(c)\cdot f(b) < 0
$$

the root lies in the interval \( [c, b] \), so \( a \) is replaced with \( c \).

This process is repeated iteratively until the interval containing the root becomes sufficiently small. The stopping criterion is generally given by:

$$
|b - a| < \varepsilon
$$

where $$\( \varepsilon \)$$ is the prescribed tolerance.

The Regular False Position Method is generally faster than the Bisection Method because it uses the function values to estimate the root, although in some cases convergence may be slower if one endpoint remains fixed.

**Input Format**

1. The first line contains two real numbers:

$$
L \ \  R
$$

  - The function \( f(x) \) **must change sign** in the interval \( [L, R] \):

$$
f(L)\cdot f(R) < 0
$$

2. The second line contains the **allowed error (tolerance)**:

$$
\varepsilon
$$

**Output Format**

- All real roots of the function lying within the interval \( [L, R] \) are displayed.
- For each root, the **corresponding sub-interval** and the **approximate root value** are shown.

[⬆](#table-of-contents)

#### False Position Code
```cpp
#include <bits/stdc++.h>
using namespace std;

double func(double x) {
    return x*x - 4*x - 10;
}

double falsePosition(double a, double b, double eps) {
    double c;
    while(fabs(b - a) >= eps) {
        c = a - func(a) * (b - a) / (func(b) - func(a));
        if(fabs(func(c)) < eps)
            break;
        else if(func(a) * func(c) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    double L, R, eps;
    fin >> L >> R >> eps;

    fout << "Given Function: f(x) = x^2 - 4x - 10\n";
    fout << "Order (Degree) of the function: 2\n\n";
    fout << "Search Interval: [" << L << ", " << R << "]\n";
    fout << "Allowed Error (epsilon): " << eps << "\n\n";
    fout << "Roots found:\n";

    int root_no = 1;

    for(double i = L; i < R; i++) {
        if(func(i) * func(i + 1) < 0) {
            double root = falsePosition(i, i + 1, eps);
            fout << "Root " << root_no
                 << " lies in interval [" << i << ", " << i + 1 << "] = "
                 << fixed << setprecision(6) << root << "\n";
            root_no++;
        }
    }

    fin.close();
    fout.close();
    return 0;
}

```

[⬆](#table-of-contents)

#### False Position Input
```
-10 10
0.0001
```

[⬆](#table-of-contents)

#### False Position Output
```
Given Function: f(x) = x^2 - 4x - 10
Order (Degree) of the function: 2

Search Interval: [-10, 10]
Allowed Error (epsilon): 0.0001

Roots found:
Root 1 lies in interval [-2, -1] = -1.741657
Root 2 lies in interval [5, 6] = 5.741657

```

[⬆](#table-of-contents)

---
### Secant Method

#### Secant Theory
The **Secant Method** is a numerical technique used to determine the root of a non-linear equation of the form `f(x) = 0`. Unlike the Bisection or False Position methods, the Secant Method does **not require the function to change sign** over an interval, and it uses two initial approximations that are close to the root.

Let the initial guesses be  

\( x_0 \) and \( x_1 \)

The next approximation of the root is computed using the formula:

$$
x_{n+1} = x_n - f(x_n) \frac{x_n - x_{n-1}}{f(x_n) - f(x_{n-1})}
$$

Here, \( x_{n+1} \) is the intersection of the secant line passing through the points \( (x_{n-1}, f(x_{n-1})) \) and \( (x_n, f(x_n)) \) with the x-axis.

The process is repeated iteratively, updating the two previous approximations as follows:

$$
x_{n-1} \gets x_n, \quad x_n \gets x_{n+1}
$$

until the difference between successive approximations becomes smaller than a prescribed tolerance:

$$
|x_{n+1} - x_n| < \varepsilon
$$

or the absolute value of the function at the current approximation satisfies:

$$
|f(x_{n+1})| < \varepsilon
$$

The Secant Method typically converges faster than the Bisection Method, although it **may fail to converge** if the initial guesses are not sufficiently close to the root. It is particularly useful when derivative information is not available, unlike the Newton-Raphson Method.

**Input Format**

1. The first line contains two real numbers for interval :

$$
L \;\ R
$$

representing the two initial guesses.

2. The second line contains the **allowed error (tolerance)**:

$$
\varepsilon
$$

**Output Format**

- The approximate root of the function is displayed.
  - For each root, the corresponding sub-interval and the approximate root value are shown.  

[⬆](#table-of-contents)

#### Secant Code
```cpp
#include <bits/stdc++.h>
using namespace std;

double func(double x) {
    return x*x - 4*x - 10;
}

double secantMethod(double x0, double x1, double eps) {
    double x2;
    while(true) {
        if(fabs(func(x1) - func(x0)) < 1e-12) break;
        x2 = x1 - func(x1)*(x1 - x0)/(func(x1) - func(x0));
        if(fabs(x2 - x1) < eps) break;
        x0 = x1;
        x1 = x2;
    }
    return x2;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    double L, R, eps;
    fin >> L >> R >> eps;

    fout << "Given Function: f(x) = x^2 - 4x - 10\n";
    fout << "Order (Degree) of the function: 2\n\n";
    fout << "Search Interval: [" << L << ", " << R << "]\n";
    fout << "Allowed Error (epsilon): " << eps << "\n\n";
    fout << "Roots found:\n";

    int root_no = 1;

    for(double i = L; i < R; i++) {
        if(func(i) * func(i + 1) < 0) {
            double root = secantMethod(i, i + 1, eps);
            fout << "Root " << root_no
                 << " lies in interval [" << i << ", " << i + 1 << "] = "
                 << fixed << setprecision(6) << root << "\n";
            root_no++;
        }
    }

    fin.close();
    fout.close();
    return 0;
}

```

[⬆](#table-of-contents)

#### Secant Input
```
-10 10
0.0001
```

[⬆](#table-of-contents)

#### Secant Output
```
Given Function: f(x) = x^2 - 4x - 10
Order (Degree) of the function: 2

Search Interval: [-10, 10]
Allowed Error (epsilon): 0.0001

Roots found:
Root 1 lies in interval [-2, -1] = -1.741657
Root 2 lies in interval [5.000000, 6.000000] = 5.741657
```

[⬆](#table-of-contents)

---
### Newton-Raphson Method

#### Newton-Raphson Theory

The **Newton-Raphson Method** is a numerical technique used to determine the root of a non-linear equation of the form `f(x) = 0`. Unlike the Secant or False Position methods, the Newton-Raphson Method **requires the derivative** of the function to compute successive approximations. It uses a single initial guess that is close to the root.

Let the initial guess be  

\[
x_0
\]

The next approximation of the root is computed using the formula:

$$
x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}
$$

Here, \( x_{n+1} \) is obtained by finding the x-intercept of the tangent line to the curve \( y = f(x) \) at the point \( (x_n, f(x_n)) \).

The process is repeated iteratively, updating the approximation as follows:

$$
x_n \gets x_{n+1}
$$

until the difference between successive approximations becomes smaller than a prescribed tolerance:

$$
|x_{n+1} - x_n| < \varepsilon
$$

or the absolute value of the function at the current approximation satisfies:

$$
|f(x_{n+1})| < \varepsilon
$$

The Newton-Raphson Method typically converges faster than the Bisection or Secant Methods, especially when the initial guess is sufficiently close to the root. However, it **may fail to converge** if the derivative is zero or the initial guess is far from the actual root.

**Input Format**

1. The first line contains the tro integer as interval and first integer treat as initial guess:

$$
L \;\ R
$$

2. The second line contains the **allowed error (tolerance)**:

$$
\varepsilon
$$

**Output Format**

- The approximate root of the function is displayed.  
  - For each root, the corresponding sub-interval and the approximate root value are shown.

[⬆](#table-of-contents)

#### Newton-Raphson Code
```cpp
#include <bits/stdc++.h>
using namespace std;

double func(double x) {
    return x*x - 4*x - 10;
}

double dfunc(double x) {
    return 2*x - 4;
}

double newtonRaphson(double x0, double eps) {
    double x1;
    while (true) {
        if (fabs(dfunc(x0)) < 1e-12) break;
        x1 = x0 - func(x0)/dfunc(x0);
        if (fabs(x1 - x0) < eps) break;
        x0 = x1;
    }
    return x1;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    double L, R, eps;
    fin >> L >> R >> eps;

    fout << "Given Function: f(x) = x^2 - 4x - 10\n";
    fout << "Order (Degree) of the function: 2\n\n";
    fout << "Search Interval: [" << L << ", " << R << "]\n";
    fout << "Allowed Error (epsilon): " << eps << "\n\n";
    fout << "Roots found:\n";

    int root_no = 1;

    for(double i = L; i < R; i++) {
        if(func(i) * func(i + 1) < 0) {
            double root = newtonRaphson(i, eps);
            fout << "Root " << root_no
                 << " lies in interval [" << i << ", " << i + 1 << "] = "
                 << fixed << setprecision(6) << root << "\n";
            root_no++;
        }
    }

    fin.close();
    fout.close();
    return 0;
}

```

[⬆](#table-of-contents)

#### Newton-Raphson Input
```
-10 10
0.0001

```

[⬆](#table-of-contents)

#### Newton-Raphson Output
```
Given Function: f(x) = x^2 - 4x - 10
Order (Degree) of the function: 2

Search Interval: [-10, 10]
Allowed Error (epsilon): 0.0001

Roots found:
Root 1 lies in interval [-2, -1] = -1.741657
Root 2 lies in interval [5.000000, 6.000000] = 5.741657

```

[⬆](#table-of-contents)

---

### Solution of Differential Equations

### Runge-Kutta Method

#### Runge-Kutta Theory

The **Runge-Kutta 4th Order Method (RK4)** is a numerical technique used to solve **ordinary differential equations (ODEs)** of the form:

$$
\frac{dy}{dx} = f(x, y), \quad y(x_0) = y_0
$$

It provides a highly accurate approximation of \(y\) at successive points by combining **weighted slopes**.

**Step Calculation**

For each step of size \(h\), the RK4 method calculates:

$$
k_1 = h \cdot f(x_n, y_n)
$$

$$
k_2 = h \cdot f\left(x_n + \frac{h}{2}, y_n + \frac{k_1}{2}\right)
$$

$$
k_3 = h \cdot f\left(x_n + \frac{h}{2}, y_n + \frac{k_2}{2}\right)
$$

$$
k_4 = h \cdot f(x_n + h, y_n + k_3)
$$

The next value \(y_{n+1}\) is then computed as:

$$
y_{n+1} = y_n + \frac{k_1 + 2k_2 + 2k_3 + k_4}{6}
$$

and the next \(x\) value is:

$$
x_{n+1} = x_n + h
$$

**Input format**

- The first line contains **4 real numbers**:  
  - **x0** → initial value of x  
  - **y0** → initial value of y (y(x0))  
  - **xf** → final value of x (end of interval)  
  - **h** → step size  
- Represents solving the differential equation **dy/dx = f(x, y)** using **Runge-Kutta 4th order method** from **x0** to **xf**.

 **Output Format**
 
 - For **each step**, the program prints:  
  - Step number  
  - Values of **k1, k2, k3, k4**  
  - Updated value of **y** at the new **x**  
- Values are formatted with **6 decimal places**.  
- Steps continue until **x ≥ xf**.

[⬆](#table-of-contents)

#### Runge-Kutta Code
```cpp
#include <bits/stdc++.h>
using namespace std;

double f(double x, double y){
    return x*y + y*y;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if(!fin){
        cout << "Error: input.txt not found!" << endl;
        return 0;
    }
    if(!fout){
        cout << "Error: Can't open output.txt!" << endl;
        return 0;
    }

    double x0, y0, xf, h;
    fin >> x0 >> y0 >> xf >> h;

    double x = x0, y = y0;
    int ct = 1;

    while(x < xf ){
        fout << "Step " << ct << ":\n";

        double k1 = h*f(x, y);
        double k2 = h*f(x + h/2, y + k1/2);
        double k3 = h*f(x + h/2, y + k2/2);
        double k4 = h*f(x + h, y + k3);
        double k = (k1 + 2*k2 + 2*k3 + k4)/6;

        fout << fixed << setprecision(6);
        fout << "k1 = " << k1 << "\n";
        fout << "k2 = " << k2 << "\n";
        fout << "k3 = " << k3 << "\n";
        fout << "k4 = " << k4 << "\n";

        y = y + k;
        x = x + h;

        fout << "At x = " << x << " : y = " << y << "\n\n";
        ct++;
    }

    fin.close();
    fout.close();
    return 0;
}

```

[⬆](#table-of-contents)

#### Runge-Kutta Input
```
0 1 1 0.2
```

[⬆](#table-of-contents)

#### Runge-Kutta Output
```
Step 1:
k1 = 0.200000
k2 = 0.264000
k3 = 0.278925
k4 = 0.378287
At x = 0.200000 : y = 1.277356

Step 2:
k1 = 0.377422
k2 = 0.517835
k3 = 0.564204
k4 = 0.825593
At x = 0.400000 : y = 1.838538

Step 3:
k1 = 0.823127
k2 = 1.237602
k3 = 1.453437
k4 = 2.562456
At x = 0.600000 : y = 3.299815

Step 4:
k1 = 2.573733
k2 = 4.849664
k3 = 7.355766
k4 = 24.413173
At x = 0.800000 : y = 11.866109

Step 5:
k1 = 30.059486
k2 = 149.518623
k3 = 1516.385273
k4 = 467416.107809
At x = 1.000000 : y = 78474.861957
```  

[⬆](#table-of-contents)

---

### Interpolation and Approximation  

### Newton Forward Interpolation

#### Newton Forward Interpolation Theory
Newton's Forward Interpolation is used to estimate the value of an unknown variable `x` which is less than the middle value of the given data. This method is applicable when the difference between any two consecutive values of `x` is constant.

Let the given data points be  $x_0, x_1, \ldots , x_n$  with corresponding values  $y_0, y_1, \ldots , y_n$.

The data must satisfy the condition:

$$
x_i - x_{i-1} = h \quad \text{(constant)}, \quad 1 \le i \le n
$$

and the interpolation point should satisfy: 

$$
x < \frac{x_0 + x_n}{2}
$$



The forward difference is defined as:

$$
\Delta y_i = y_{i+1} - y_i
$$

Higher order forward differences are:

$$
\Delta^2 y_i = \Delta(\Delta y_i)
$$

$$
\Delta^3 y_i = \Delta(\Delta^2 y_i)
$$

and so on.



Let

$$
u = \frac{x - x_0}{h}
$$

Then the Newton's Forward Interpolation formula is given by

$$
y(x) = y_0+ u \Delta y_0+ \frac{u(u-1)}{2!} \Delta^2 y_0+ \frac{u(u-1)(u-2)}{3!} \Delta^3 y_0+ \cdots
$$

**Input Format**

The input starts with an integer $n$ - the number of variable $x$ and $y$.

The second line contains $n$ integers $x_i$ for $1\le i \le n$.

The third line contains $n$ integers $y_i$ for $1\le i \le n$.

The final line contains the value of $x$ for which the interpolated value is to be determined.

**Output Format:**

Firstly, the output shows the Forward Difference Table.

Secondly, the interpolated value of $y$ is displayed.

[⬆](#table-of-contents)

#### Newton Forward Interpolation Code
```cpp
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

    fout<<"\nInterpolated value at x = "<<value<<" is "<<sum<<endl;

    fin.close();
    fout.close();
    return 0;
}
```

[⬆](#table-of-contents)

#### Newton Forward Interpolation Input

```
4
3 5 7 9
180 150 120 90
4
```

[⬆](#table-of-contents)

#### Newton Forward Interpolation Output
```

Forward Difference Table:
3	180	-30	0	0	
5	150	-30	0	
7	120	-30	
9	90	

Interpolated value at x = 4 is 165
```

[⬆](#table-of-contents)

---
### Newton Backward Interpolation

#### Newton Backward Interpolation Theory
Newton's Backward Interpolation is used to estimate the value of an unknown variable `x` which is greater than the middle value of the given data. This method is applicable when the difference between any two consecutive values of `x` is constant.

Let the given data points be $x_0, x_1, \ldots , x_n$ with corresponding values $y_0, y_1, \ldots , y_n$.

The data must satisfy the condition:

$$
x_i - x_{i-1} = h \quad \text{(constant)}, \quad 1 \le i \le n
$$

and the interpolation point should satisfy:

$$
x > \frac{x_0 + x_n}{2}
$$

The backward difference is defined as:

$$
\nabla y_i = y_i - y_{i-1}
$$

Higher order backward differences are:

$$
\nabla^2 y_i = \nabla(\nabla y_i)
$$

$$
\nabla^3 y_i = \nabla(\nabla^2 y_i)
$$

and so on.

Let

$$
u = \frac{x - x_n}{h}
$$

Then the Newton's Backward Interpolation formula is given by

$$
y(x) = y_n+ u \nabla y_n+ \frac{u(u+1)}{2!} \nabla^2 y_n+ \frac{u(u+1)(u+2)}{3!} \nabla^3 y_n+ \cdots
$$

**Input Format**

The input starts with an integer $n$ - the number of variable $x$ and $y$.

The second line contains $n$ integers $x_i$ for $1\le i \le n$.

The third line contains $n$ integers $y_i$ for $1\le i \le n$.

The final line contains the value of $x$ for which the interpolated value is to be determined.

**Output Format:**

Firstly, the output shows the Backward Difference Table.

Secondly, the interpolated value of $y$ is displayed.

[⬆](#table-of-contents)

#### Newton Backward Interpolation Code
```cpp
#include <bits/stdc++.h>
using namespace std;

long long fact(int n){
    long long f = 1;
    for(int i=2; i<=n; i++){
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
    for(int i=0; i<n; i++){
        fin>>x[i];
    }
    for(int i=0; i<n; i++){
        fin>>y[i][0];
    }

    for(int j=1; j<n; j++){
        for(int i=n-1; i>=j; i--){
            y[i][j] = y[i][j-1] - y[i-1][j-1];
        }
    }

    fout<<"\nBackward Difference Table:\n";
    for(int i=0; i<n; i++){
        fout<<x[i]<<"\t";
        for(int j=0; j<=i; j++){
            fout<<y[i][j]<<"\t";
        }
        fout<<endl;
    }

    double val;
    fin>>val;
    
    double h = x[1] - x[0];
    double v = (val - x[n-1]) / h;

    double sum = y[n-1][0];
    double v_term = 1;
    for(int i=1; i<n; i++){
        v_term *= (v + (i-1));
        sum += (v_term * y[n-1][i]) / fact(i);
    }

    fout<<"\nInterpolated value at x = "<<val<<" is "<<sum<<endl;

    fin.close();
    fout.close();
    return 0;
}
```

[⬆](#table-of-contents)

#### Newton Backward Interpolation Input
```
5
24 28 32 36 40
28.06 30.19 32.75 34.94 40
33
```

[⬆](#table-of-contents)

#### Newton Backward Interpolation Output
```

Backward Difference Table:
24	28.06	
28	30.19	2.13	
32	32.75	2.56	0.43	
36	34.94	2.19	-0.37	-0.8	
40	40	5.06	2.87	3.24	4.04	

Interpolated value at x = 33 is 33.2747
```

[⬆](#table-of-contents)

---
### Newton Divided Difference Interpolation

#### Newton Divided Difference Interpolation Theory
Newton's Divided Difference Interpolation is used to estimate the value of an unknown variable `x` when the data points are not equally spaced. This method constructs an interpolating polynomial that passes through all given data points.

Let the given data points be $x_0, x_1, x_2, \ldots , x_n$ with corresponding values $y_0, y_1, y_2, \ldots , y_n$, where the values of `x` are not necessarily equally spaced.

The first divided difference is defined as:

$$
f[x_i, x_{i+1}] = \frac{y_{i+1} - y_i}{x_{i+1} - x_i}
$$

The second divided difference is defined as:

$$
f[x_i, x_{i+1}, x_{i+2}] =
\frac{f[x_{i+1}, x_{i+2}] - f[x_i, x_{i+1}]}{x_{i+2} - x_i}
$$

Higher order divided differences are defined recursively as:

$$
f[x_i, x_{i+1}, \ldots , x_{i+k}] =
\frac{f[x_{i+1}, \ldots , x_{i+k}] - f[x_i, \ldots , x_{i+k-1}]}{x_{i+k} - x_i}
$$

The Newton's Divided Difference Interpolation formula is given by

$$
\begin{aligned}
y(x) = & y_0+ (x - x_0) f[x_0, x_1]+ (x - x_0)(x - x_1) f[x_0, x_1, x_2] \\& + (x - x_0)(x - x_1)(x - x_2) f[x_0, x_1, x_2, x_3]+ \cdots\end{aligned}
$$

This method is suitable for interpolation when the data points are unequally spaced and provides a flexible way to construct the interpolating polynomial.

**Input Format**

The input starts with an integer $n$ - the number of variable $x$ and $y$.

The second line contains $n$ integers $x_i$ for $1\le i \le n$.

The third line contains $n$ integers $y_i$ for $1\le i \le n$.

The final line contains the value of $x$ for which the interpolated value is to be determined.

**Output Format:**

Firstly, the output shows the Divided Difference Table.

Secondly, the interpolated value of $y$ is displayed.

[⬆](#table-of-contents)

#### Newton Divided Difference Interpolation Code
```cpp
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
```

[⬆](#table-of-contents)

#### Newton Divided Difference Interpolation Input
```
4
1 4 6 5
0 1.386294 1.79175 1.609438
2
```

[⬆](#table-of-contents)

#### Newton Divided Difference Interpolation Output
```

Divided Difference Table:
1	0	0.462098	-0.051874	0.0078645	
4	1.38629	0.202728	-0.020416	
6	1.79175	0.182312	
5	1.60944	

Interpolated value at x = 2 is 0.628762
```

[⬆](#table-of-contents)

---

### Numerical Integration
 
### Simpson’s 1/3rd Rule Method

#### Simpson’s 1/3rd Rule Theory
Simpson’s 1/3rd Rule is a numerical integration method used to approximate the definite integral of a function when the integrand is known at equally spaced points. This method provides better accuracy than the Trapezoidal Rule for smooth functions.

Let the interval of integration be $[a, b]$ and divide it into an even number of subintervals $n$, where the width of each subinterval is given by:

$$
h = \frac{b - a}{n}, \quad \text{where } n \text{ is even}
$$

Let the ordinates of the function be:

$$
y_0 = f(a),\; y_1 = f(a+h),\; y_2 = f(a+2h),\; \ldots ,\; y_n = f(b)
$$

Then the Simpson’s 1/3rd Rule formula is given by

$$
\int_a^b f(x)dx \approx \frac{h}{3}\left[y_0 + y_n+ 4(y_1 + y_3 + \cdots + y_{n-1})+ 2(y_2 + y_4 + \cdots + y_{n-2})\right]
$$

This method is applicable when the function is continuous and smooth over the interval of integration and the number of subintervals is even.

**Input Format**

Input is taken by a single line containing 3 integers : $a,b,n$ - lower limit, upper limit & number of intervals.

**Output Format**

In the output, the function is shown.

Then the upper limit, lower limit & number of intervals are shown.

At last, the integral value is shown.

[⬆](#table-of-contents)

#### Simpson’s 1/3rd Rule Code
```cpp
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
```

[⬆](#table-of-contents)

#### Simpson’s 1/3rd Rule Input
```
0 1 4
```

[⬆](#table-of-contents)

#### Simpson’s 1/3rd Rule Output
```

f(x) = 1 / (1 + x * x)
where, lower limit = 0 , upper limit = 1 , Number of intervals = 4

The value of integral: 0.785392
```

[⬆](#table-of-contents)

---
### Simpson’s 3/8th Rule Method

#### Simpson’s 3/8th Rule Theory
Simpson’s 3/8th Rule is a numerical integration method used to approximate the definite integral of a function when the integrand is known at equally spaced points. This method is an extension of Simpson’s Rule and provides good accuracy for smooth functions.

Let the interval of integration be $[a, b]$ and divide it into $n$ equal subintervals, where the width of each subinterval is given by:

$$
h = \frac{b - a}{n}, \quad \text{where } n \text{ is a multiple of } 3
$$

Let the ordinates of the function be:

$$
y_0 = f(a),\; y_1 = f(a+h),\; y_2 = f(a+2h),\; \ldots ,\; y_n = f(b)
$$

Then the Simpson’s 3/8th Rule formula is given by

$$
\int_a^b f(x)\,dx \approx \frac{3h}{8}\left[y_0 + y_n+ 3(y_1 + y_2 + y_4 + y_5 + \cdots + y_{n-1})+ 2(y_3 + y_6 + \cdots + y_{n-3})\right]$$

This method is applicable when the function is continuous and smooth over the interval of integration and the number of subintervals is a multiple of three.

**Input Format**

Input is taken by a single line containing 3 integers : $a,b,n$ - lower limit, upper limit & number of intervals.

**Output Format**

In the output, the function is shown.

Then the upper limit, lower limit & number of intervals are shown.

At last, the integral value is shown.

[⬆](#table-of-contents)

#### Simpson’s 3/8th Rule Code
```cpp
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

    fin.close();
    fout.close();
    return 0;
}
```

[⬆](#table-of-contents)

#### Simpson’s 3/8th Rule Input
```
0 4.5 9
```

[⬆](#table-of-contents)

#### Simpson’s 3/8th Rule Output
```

f(x) = sqrt(x);
where, lower limit = 0 , upper limit = 4.5 , Number of intervals = 9

The value of integral: 6.32902
```

[⬆](#table-of-contents)

---

### Numerical Differentiation 

### Differentiation using Forward Interpolation

#### Differentiation using Forward Interpolation Theory

Forward interpolation–based differentiation is a numerical technique used to approximate the **first** and **second derivatives** of a function when the function values are known at **equally spaced points**.  
This method is especially suitable when the point of differentiation lies **near the beginning of the data table**.

**Step Size**

Let the tabulated values be equally spaced with step size:

$$
h = x_{i+1} - x_i
$$

**Definition of \( u \)**

$$
u = \frac{p - x_0}{h}
$$

where  
- \( p \) is the point at which differentiation is required  
- \( x_0 \) is the first tabulated value  

From Newton's Forward Interpolation formula :

$$
y(x) = y_0 + u \Delta y_0 + \frac{u(u-1)}{2!} \Delta^2 y_0 + \frac{u(u-1)(u-2)}{3!} \Delta^3 y_0 + \cdots
$$

**First Derivative Formula**

Using Newton’s Forward Interpolation Differentiation Formula, the first derivative at point \( p \) is:

$$
f'(p) = \frac{1}{h} \left[\Delta y_0 + \frac{2u - 1}{2} \Delta^2 y_0 + \frac{3u^2 - 6u + 2}{6} \Delta^3 y_0 + \frac{4u^3 - 18u^2 + 14u - 6}{24} \Delta^4 y_0 + \cdots \right]
$$


**Second Derivative Formula**

The second derivative at point \( p \) is given by:

$$
f''(p) = \frac{1}{h^2} \left[ \Delta^2 y_0 + (u - 1)\Delta^3 y_0 + \frac{12u^2 - 36u + 14}{24} \Delta^4 y_0 + \cdots \right]
$$

**Error Calculation**

**Relative Error (%)** = |Exact Value − Numerical Value| / |Exact Value| × 100


**Input Format**

Input is taken by a single line containing 4 integers : $upperLimit, lowerLimit, n, p$ - upper limit, lower limit, number of subintervals, point at which derivatives are to be evaluated.


**Output Format**

The output includes:

1. Forward difference table  
2. Numerical value of the first derivative at point `p`  
3. Numerical value of the second derivative at point `p`  
4. Relative error of the first derivative  
5. Relative error of the second derivative 

[⬆](#table-of-contents)

#### Differentiation using Forward Interpolation Code
```cpp
#include <bits/stdc++.h>
using namespace std;

double func(double x){
    return x*x*x + 2*x*x + x + 1;
}

double dfunc(double x){
    return 3*x*x + 4*x + 1;
}

double ddfunc(double x){
    return 6*x + 4;
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

    fout<<fixed<<setprecision(3);
    double upperLimit, lowerLimit, p;
    int n;
    fin>>upperLimit>>lowerLimit>>n>>p;

    double h = (upperLimit - lowerLimit) / n;

    double x[n], y[n][n];
    for(int i=0; i<n; i++){
        x[i] = lowerLimit + i*h;
    }
    for(int i=0; i<n; i++){
        y[i][0] = func(x[i]);
    }

    for(int j=1; j<n; j++){
        for(int i=0; i<n-j; i++){
            y[i][j] = y[i+1][j-1] - y[i][j-1];
        }
    }

    fout<<"\nThe difference table is : \n";
    for(int i=0; i<n; i++){
        fout<<x[i]<<"\t";
        for(int j=0; j<n-i; j++){
            fout<<y[i][j]<<"\t";
        }
        fout<<endl;
    }

    double d = x[1] - x[0];
    double u = (p - x[0]) / d;

    double y1 = ( y[0][1] + ((2*u - 1)/2)*y[0][2] + ((3*u*u - 6*u+ 2)/6)*y[0][3] + ((4*u*u*u - 18*u*u - 14*u - 6)/24)*y[0][4] ) / d;
    fout<<"\nThe value of f'(p) is = "<<y1<<endl;

    double y2 = ( y[0][2] + (u-1)*y[0][3] + ((12*u*u - 36*u - 14)/24)*y[0][4] ) / (d*d);
    fout<<"\nThe value of f''(p) is = "<<y2<<endl;

    double err1 = ( fabs(dfunc(p) - y1) / fabs(dfunc(p)) ) * 100;
    double err2 = ( fabs(ddfunc(p) - y2) / fabs(ddfunc(p)) ) * 100;

    fout<<"\nThe relative error of f'(p) = "<<err1<<"%\n";
    fout<<"\nThe relative error of f''(p) = "<<err2<<"%\n";

    fin.close();
    fout.close();
    return 0;
}
```

[⬆](#table-of-contents)

#### Differentiation using Forward Interpolation Input
```
5 0 6 0.5
```

[⬆](#table-of-contents)

#### Differentiation using Forward Interpolation Output
```

The difference table is : 
0.000	1.000	2.801	6.250	3.472	0.000	-0.000	
0.833	3.801	9.051	9.722	3.472	-0.000	
1.667	12.852	18.773	13.194	3.472	
2.500	31.625	31.968	16.667	
3.333	63.593	48.634	
4.167	112.227	

The value of f'(p) is = 3.750

The value of f''(p) is = 7.000

The relative error of f'(p) = 0.000%

The relative error of f''(p) = 0.000%

```

[⬆](#table-of-contents)

---
### Differentiation using Backward Interpolation

#### Differentiation using Backward Interpolation Theory

Backward interpolation–based differentiation is a numerical technique used to approximate the **first** and **second derivatives** of a function when the function values are known at **equally spaced points**.  
This method is especially suitable when the point of differentiation lies **near the end of the data table**.

The method is based on **Newton’s Backward Interpolation Formula**, which utilizes backward differences calculated from the last tabulated value.

**Step Size**

For equally spaced data points, the step size is defined as:

$$
h = x_i - x_{i-1}
$$

**Definition of \( v \)**

$$
v = \frac{p - x_n}{h}
$$

where  
- \( p \) is the point at which differentiation is required  
- \( x_n \) is the last tabulated value  

**Newton’s Backward Interpolation Formula**

The backward interpolation polynomial is given by:

$$
y(x) = y_n + v \nabla y_n + \frac{v(v+1)}{2!} \nabla^2 y_n + \frac{v(v+1)(v+2)}{3!} \nabla^3 y_n + \cdots
$$

where \( \nabla \) denotes the backward difference operator.

**First Derivative Formula**

The first derivative at point \( p \) is obtained by differentiating the backward interpolation polynomial:

$$
f'(p) = \frac{1}{h} \left[ \nabla y_n + \frac{2v + 1}{2} \nabla^2 y_n + \frac{3v^2 + 6v + 2}{6} \nabla^3 y_n + \frac{4v^3 + 18v^2 + 22v + 6}{24} \nabla^4 y_n + \cdots \right]
$$


**Second Derivative Formula**

The second derivative at point \( p \) is given by:

$$
f''(p) = \frac{1}{h^2} \left[ \nabla^2 y_n + (v + 1)\nabla^3 y_n + \frac{12v^2 + 36v + 22}{24} \nabla^4 y_n + \cdots \right]
$$

**Error Calculation**

The accuracy of the numerical derivatives is evaluated using **relative error**:

$$
\text{Relative Error } =
\frac{|\text{Exact Value} - \text{Numerical Value}|}
{|\text{Exact Value}|}
\times 100
$$


**Input Format**

Input is taken by a single line containing 4 integers : $upperLimit, lowerLimit, n, p$ - upper limit, lower limit, number of subintervals, point at which derivatives are to be evaluated.

**Output Format**

The output includes:

1. Backward difference table  
2. Numerical value of the first derivative at point `p`  
3. Numerical value of the second derivative at point `p`  
4. Relative error of the first derivative  
5. Relative error of the second derivative

[⬆](#table-of-contents)

#### Differentiation using Backward Interpolation Code
```cpp
#include <bits/stdc++.h>
using namespace std;

double func(double x){
    return ( pow(sin(x),5) + 4*pow(sin(x),4) + 1 );
}

double dfunc(double x){
    return ( 5*pow(sin(x),4)*cos(x) + 16*pow(sin(x),3)*cos(x) );
}

double ddfunc(double x){
    return ( -5*pow(sin(x),5) + 20*pow(sin(x),3)*pow(cos(x),2) - 16*pow(sin(x),4) + 48*pow(sin(x),2)*pow(cos(x),2) );
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
    
    fout<<fixed<<setprecision(3);
    double upperLimit, lowerLimit, p;
    int n;
    fin>>upperLimit>>lowerLimit>>n>>p;

    double h = (upperLimit - lowerLimit) / n;

    double x[n], y[n][n];
    for(int i=0; i<n; i++){
        x[i] = lowerLimit + i*h;
    }
    for(int i=0; i<n; i++){
        y[i][0] = func(x[i]);
    }

    for(int j=1; j<n; j++){
        for(int i=n-1; i>=j; i--){
            y[i][j] = y[i][j-1] - y[i-1][j-1];
        }
    }

    fout<<"\nThe difference table is : \n";
    for(int i=0; i<n; i++){
        fout<<x[i]<<"\t";
        for(int j=0; j<=i; j++){
            fout<<y[i][j]<<"\t";
        }
        fout<<endl;
    }
    double d = x[1] - x[0];
    double v = (p - x[n-1]) / d;

    double y1 = ( y[n-1][1] + ((2*v + 1)/2)*y[n-1][2] + ((3*v*v + 6*v+ 2)/6)*y[n-1][3] + ((4*v*v*v + 18*v*v + 22*v + 6)/24)*y[n-1][4] ) / d;
    fout<<"\nThe value of f'(p) is = "<<y1<<endl;

    double y2 = ( y[n-1][2] + (v+1)*y[n-1][3] + ((12*v*v + 36*v + 22)/24)*y[n-1][4] ) / (d*d);
    fout<<"\nThe value of f''(p) is = "<<y2<<endl;

    double err1 = ( abs(dfunc(p) - y1) / abs(dfunc(p)) ) * 100;
    double err2 = ( abs(ddfunc(p) - y2) / abs(ddfunc(p)) ) * 100;
    fout<<"\nThe relative error of f'(p) = "<<err1<<"%\n";
    fout<<"\nThe relative error of f''(p) = "<<err2<<"%\n";

    fin.close();
    fout.close();
    return 0;
}
```

[⬆](#table-of-contents)

#### Differentiation using Backward Interpolation Input
```
5 0 15 4.5
```

[⬆](#table-of-contents)

#### Differentiation using Backward Interpolation Output
```
The difference table is : 
0.000	1.000	
0.333	1.050	0.050	
0.667	1.675	0.626	0.576	
1.000	3.427	1.752	1.126	0.550	
1.333	5.437	2.010	0.257	-0.869	-1.419	
1.667	5.904	0.467	-1.542	-1.800	-0.931	0.489	
2.000	4.356	-1.548	-2.015	-0.473	1.326	2.257	1.768	
2.333	2.291	-2.065	-0.517	1.499	1.972	0.646	-1.611	-3.380	
2.667	1.195	-1.096	0.969	1.486	-0.013	-1.985	-2.631	-1.019	2.360	
3.000	1.002	-0.193	0.903	-0.066	-1.551	-1.538	0.447	3.078	4.097	1.737	
3.333	1.005	0.003	0.197	-0.706	-0.641	0.910	2.449	2.002	-1.076	-5.173	-6.910	
3.667	1.221	0.216	0.213	0.016	0.722	1.363	0.453	-1.996	-3.997	-2.922	2.251	9.161	
4.000	2.064	0.843	0.627	0.415	0.399	-0.324	-1.687	-2.139	-0.144	3.854	6.775	4.524	-4.637	
4.333	3.288	1.224	0.381	-0.246	-0.661	-1.060	-0.736	0.951	3.090	3.234	-0.620	-7.396	-11.920	-7.283	
4.667	3.989	0.701	-0.523	-0.903	-0.657	0.004	1.064	1.800	0.850	-2.240	-5.474	-4.854	2.542	14.462	21.745	

The value of f'(p) is = 2.298

The value of f''(p) is = -10.493

The relative error of f'(p) = 5.023%

The relative error of f''(p) = 17.384%
```

[⬆](#table-of-contents)

---

### Curve Fitting Regression 

### Least Squares Regression (Linear) Method

#### Least Squares Regression (Linear) Theory

Simple Linear Regression is a statistical method used to model the relationship between two variables by fitting a straight line to observed data points. The relationship is expressed as a linear equation:

$$
y = a + bx
$$

where  
- \(x\) is the independent variable  
- \(y\) is the dependent variable  
- \(a\) is the intercept of the regression line  
- \(b\) is the slope of the regression line  

**Principle of Least Squares**

The method is based on the **principle of least squares**, which states that the best-fit line is the one that minimizes the sum of the squares of the vertical deviations (errors) between the observed values and the values predicted by the line.

**Mathematical Formulation**

Given \(n\) observations:

$$
(x_1, y_1), (x_2, y_2), \dots, (x_n, y_n)
$$

the coefficients \(a\) and \(b\) are calculated using the following formulas:

**Slope \(b\)**

$$
b = \frac{n\sum x_iy_i - (\sum x_i)(\sum y_i)}
         {n\sum x_i^2 - (\sum x_i)^2}
$$

**Intercept \(a\)**

$$
a = \frac{\sum y_i - b\sum x_i}{n}
$$

**Regression Line**

After calculating \(a\) and \(b\), the regression equation becomes:

$$
y = a + bx
$$

This equation can be used to estimate the value of \(y\) for any given value of \(x\).

**Input Format**

- First line contains an integer \(n\), the number of observations.
- Second line contains \(n\) real values representing the independent variable \(x\).
- Third line contains \(n\) real values representing the dependent variable \(y\).
- A fixed value \(x_0\) is used to predict the corresponding value of \(y\) using the equation:

$$
y = a + bx_0
$$

**Output Format**

- Displays the general form of the linear regression equation.
- Prints the predicted value of \(y\) for a fixed value of \(x\).
- Prints the regression line with coefficients rounded to two decimal places.

[⬆](#table-of-contents)

#### Least Squares Regression (Linear) Code
```cpp

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

```

[⬆](#table-of-contents)

#### Least Squares Regression (Linear) Input
```
5
1 2 3 4 5
2 3 5 4 6
```

[⬆](#table-of-contents)

#### Least Squares Regression (Linear) Output
```

Linear Equation is y = a + bx

for x = 6, y is 6.7

Regression Line is: y = 1.30 + 0.90x

```

[⬆](#table-of-contents)

---
### Least Squares Regression (Transcendental) Method

#### Least Squares Regression (Transcendental) Theory

Transcendental curve fitting is used when the relationship between two variables follows a power-law form:

$$
y = ax^b
$$

where  
- \(x\) is the independent variable  
- \(y\) is the dependent variable  
- \(a\) and \(b\) are constants to be determined  

**Linearization of the Model**

The given equation is nonlinear. Taking the natural logarithm on both sides:

$$
\ln y = \ln a + b \ln x
$$

Let:

$$
Y = \ln y,\quad X = \ln x,\quad A = \ln a
$$

Then the equation becomes linear:

$$
Y = A + bX
$$

This transformed equation can be solved using the **Least Squares Method**.

**Least Squares Formulation**

Given \(n\) data points:

$$
(x_1, y_1), (x_2, y_2), \dots, (x_n, y_n)
$$

After transformation:

$$
(X_i, Y_i) = (\ln x_i, \ln y_i)
$$

The coefficients are calculated as:

**Slope \(b\)**

$$
b = \frac{n\sum X_iY_i - (\sum X_i)(\sum Y_i)}
         {n\sum X_i^2 - (\sum X_i)^2}
$$

**Intercept \(\ln a\)**

$$
\ln a = \frac{\sum Y_i - b\sum X_i}{n}
$$

The value of \(a\) is obtained by:

$$
a = e^{\ln a}
$$

**Final Regression Equation**

After computing \(a\) and \(b\), the fitted curve becomes:

$$
y = ax^b
$$

**Input Format**

- First line contains an integer \(n\), the number of observed data points.
- Second line contains \(n\) positive real values representing the independent variable \(x\).
- Third line contains \(n\) positive real values representing the dependent variable \(y\).
- A fixed value \(x_0\) is used to predict the corresponding value of \(y\) using the equation:

$$
y = ax_0^b
$$

**Output Format**

- Displays the general form of the transcendental (power) equation.
- Prints the estimated value of \(y\) for a fixed value of \(x\).
- Prints the fitted regression curve with coefficients rounded to two decimal places.

[⬆](#table-of-contents)

#### Least Squares Regression (Transcendental) Code
```cpp
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
    fout<<"\nRegression Line is: "<<fixed<<setprecision(2)<<"y = "<<a<<"x^("<<b<<")"<<endl;

    fin.close();
    fout.close();
    return 0;
}
```

[⬆](#table-of-contents)

#### Least Squares Regression (Transcendental) Input
```
5
1 2 3 4 5
3 4.5 7.8 10.2 14.5

```

[⬆](#table-of-contents)

#### Least Squares Regression (Transcendental) Output
```

Transcendental Equation is y = ax^b

for x = 6, y is 15.586

Regression Line is: y = 2.70x^(0.98)

```

[⬆](#table-of-contents)

---
### Least Squares Regression (Polynomial) Method

#### Least Squares Regression (Polynomial) Theory

Polynomial Regression is a numerical technique used to fit a polynomial curve to a given set of data points. It extends simple linear regression by allowing higher-degree polynomial relationships between variables.

The general form of a polynomial of degree \(m\) is:

$$
y = a_0 + a_1x + a_2x^2 + \cdots + a_mx^m
$$

where  
- \(x\) is the independent variable  
- \(y\) is the dependent variable  
- \(a_0, a_1, \dots, a_m\) are unknown coefficients  

**Least Squares Principle**

The method determines the coefficients such that the **sum of squared errors** between the observed values and the predicted values is minimized:

$$
\sum_{i=1}^{n} (y_i - f(x_i))^2
$$

**Normal Equations**

Applying the least squares method results in a system of linear equations known as **normal equations**:

$$
\sum x^k y = a_0 \sum x^k + a_1 \sum x^{k+1} + \cdots + a_m \sum x^{k+m}
$$

for \(k = 0, 1, 2, \dots, m\).

These equations are written in matrix form and solved using **Gaussian Elimination**.

**Augmented Matrix Representation**

The system of normal equations is represented as an augmented matrix:

$$
[A | B]
$$

where  
- \(A\) contains the sums of powers of \(x\)  
- \(B\) contains the sums of products of \(x^k y\)

**Input Format**

- First line contains two integers:
  - \(n\): number of data points  
  - \(m\): degree of the polynomial
- Second line contains \(n\) real values representing \(x\)
- Third line contains \(n\) real values representing \(y\)

**Output Format**

- Displays the number of data points and polynomial degree
- Prints the augmented normal equation matrix
- Displays the fitted polynomial regression equation

[⬆](#table-of-contents)

#### Least Squares Regression (Polynomial) Code
```cpp
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
```

[⬆](#table-of-contents)

#### Least Squares Regression (Polynomial) Input
```
5 2
1 2 3 4 5
6 11 18 27 38

```

[⬆](#table-of-contents)

#### Least Squares Regression (Polynomial) Output
```

Numer of Data Points: 5

Degree of Polynomial: 2

Normal Equation (Augmented) Matrix:
5	15	55	100	
15	55	225	380	
55	225	979	1594	

Polynomial Regression Equation:
y = 3 + 2x^1 + 1x^2

```

[⬆](#table-of-contents)

---

## Contributors
This project was developed by :

- SK. NAZMUS SALEHIN NIROB – Roll : 2207045
- A. R. M. Ariful Islam – Roll : 2207046
- PRIOM SARKAR – Roll : 2207048

[⬆](#table-of-contents)

---
