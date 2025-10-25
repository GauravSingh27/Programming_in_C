/*6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B.
Read matrix A and matrix B in row major order respectively.
Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only.
Program must check the compatibility of orders of the matrices for multiplication.
Report appropriate message in case of incompatibility*/
#include <stdio.h>
int main() {
printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------\n");

    int i, j, k, m, n, p, q;
    
    printf("Enter the number of rows and columns for matrix A (m*n): ");
    scanf("%d*%d", &m, &n);

    printf("Enter the number of rows and columns for matrix B (p*q): ");
    scanf("%d*%d", &p, &q);
    
    if (n != p) {
        printf("Matrix multiplication is not possible. Number of columns of A must equal number of rows of B.\n");
        return 1;
    }

    int A[m][n], B[p][q], C[m][q];
    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B (%d x %d):\n", p, q);
    for ( i = 0; i < p; i++) {
        for ( j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < q; j++) {
            for ( k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matrix A:\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for ( i = 0; i < p; i++) {
        for ( j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("Resultant Matrix (A x B):\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

