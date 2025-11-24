/*Experiment 6: Functions 
1. Develop a recursive and non-recursive function FACT(num) to find the 
factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) 
= n * FACT(n-1). Using this function, write a C program to compute the 
binomial coefficient. Tabulate the results for different values of n and r with 
suitable messages.*/
#include <stdio.h>

long fact_nonrec(int n) {
	int i;
    long result = 1;
    for ( i = 1; i <= n; i++)
        result *= i;
    return result;
}

long fact_rec(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_rec(n - 1);
}

long binomial_coefficient(int n, int r, int use_rec) {
    if (r > n) return 0; 
    if (use_rec)
        return fact_rec(n) / (fact_rec(r) * fact_rec(n - r));
    else
        return fact_nonrec(n) / (fact_nonrec(r) * fact_nonrec(n - r));
}

int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");

    int n, r, use_rec,ni,ri;
    printf("Enter n, r (for C(n, r)) : ");
    scanf("%d %d", &n, &r);

    printf("Use recursive function? (1-Yes, 0-No): ");
    scanf("%d", &use_rec);

    printf("n! (non-recursive) = %ld\n", fact_nonrec(n));
    printf("n! (recursive)     = %ld\n", fact_rec(n));
    printf("C(%d,%d) = %ld\n", n, r, binomial_coefficient(n, r, use_rec));

    printf("\nTable of Binomial Coefficients (C(n, r)) using %s factorial:\n", use_rec ? "recursive" : "non-recursive");
    printf("  n |  r | C(n, r)\n");
    printf("----|----|--------\n");
    for ( ni = 0; ni <= 5; ni++) {
        for ( ri = 0; ri <= ni; ri++) {
            printf(" %2d | %2d | %5ld\n", ni, ri, binomial_coefficient(ni, ri, use_rec));
        }
    }

    return 0;
}

