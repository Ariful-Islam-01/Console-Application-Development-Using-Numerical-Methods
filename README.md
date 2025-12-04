# Numerical Methods Solver

This project is an implementation of the most common **Numerical Methods** used in scientific computing.  
The application provides solutions for:

- Linear Equations  
- Non-linear Equations  
- Differential Equations  
- Matrix Operations  

Each method listed below contains a **brief description**, and clicking the method name will take you to the corresponding implementation file/folder inside the project.

---

##  1. Solution of Linear Equations

### ▶ [Gauss Elimination](./Gauss-Elimination/)
A direct method used to convert a system of linear equations into an upper-triangular form followed by back substitution.  
Useful for solving small to medium-sized systems.

### ▶ [Gauss–Jordan Elimination](./Gauss-Jordan/)
An extended version of Gaussian elimination that reduces the matrix to **reduced row-echelon form (RREF)**.  
Provides the solution directly without back substitution.

### ▶ [LU Factorization](./LU-Factorization/)
Decomposes a matrix **A = LU**, where L is lower-triangular and U is upper-triangular.  
Efficient when solving the same system repeatedly with different right-hand side vectors.

---

##  2. Solution of Non-linear Equations

### ▶ [Bisection Method](./Bisection/)
A bracketing root-finding method based on repeatedly halving an interval where the function changes sign.  
Guaranteed convergence but slow.

### ▶ [False Position (Regula Falsi)](./False-Position/)
Improves on the bisection method by using a secant-like formula while still maintaining bracketing.  
Converges faster than bisection.

### ▶ [Secant Method](./Secant/)
An iterative open method that uses two initial guesses and approximates derivatives numerically.  
Faster than Newton’s method but may be less stable.

### ▶ [Newton–Raphson Method](./Newton-Raphson/)
A fast open method using the derivative of the function.  
Converges quadratically when the guess is close to the root.

---

##  3. Solution of Differential Equations

### ▶ [Runge–Kutta Method (RK4)](./Runge-Kutta/)
A widely used technique for solving first-order ordinary differential equations (ODEs).  
Provides high accuracy without requiring very small step sizes.

---

##  4. Matrix Operations

### ▶ [Matrix Inversion](./Matrix-Inversion/)
Computes the inverse of a square matrix using elementary row operations or Gauss-Jordan elimination.  
Essential for solving systems of equations and linear algebra applications.

---

## 📁 **Project Structure**

