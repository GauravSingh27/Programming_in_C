/*2.Develop a recursive function GCD (num1, num2) that accepts two integer 
arguments. Write a C program that invokes this function to find the greatest 
common divisor of two given integers.*/
#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return gcd(num2, num1 % num2);
}

int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));

    return 0;
}

