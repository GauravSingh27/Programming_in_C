/*4. Develop a C function ISPRIME (num) that accepts an integer argument and 
returns 1 if the argument is prime, a 0 otherwise. Write a C program that 
invokes this function to generate prime numbers between the given ranges.*/
#include <stdio.h>
#include <stdlib.h>
int ISPRIME(int num) {
	int i;
    if (num <= 1)
        return 0;  
    for ( i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int num, start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for ( num = start; num <= end; num++) {
        if (ISPRIME(num))
            printf("%d ", num);
    }
    printf("\n");

    return 0;
}

