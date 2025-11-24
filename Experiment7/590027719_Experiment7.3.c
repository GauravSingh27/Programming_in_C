/*3. Develop a recursive function FIBO (num) that accepts an integer argument. 
Write a C program that invokes this function to generate the Fibonacci 
sequence up to num.*/
#include <stdio.h>
int fibo(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibo(num - 1) + fibo(num - 2);
}

int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int num_terms,i;
    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &num_terms);

    printf("Fibonacci sequence up to %d terms:\n", num_terms);
    for ( i = 0; i < num_terms; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");

    return 0;
}

