/*Experiment 1:
3.Write a C program to add two numbers,take number from user*/
#include <stdio.h>

int main()
{
    printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	int number1, number2, sum;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    sum = number1 + number2;

    printf("The sum of %d and %d is: %d\n", number1, number2, sum);
    printf("thank you");

    return 0;
}
