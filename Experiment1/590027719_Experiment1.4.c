/*Experiment 1:
4. Write a C program to perform four arithemetic operation on two number taken form user.*/
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	int num1,num2,sum,sub,mult;
	float div;
	printf("Enter the value of num1: ");
	scanf("%d",&num1);
	printf("Enter the value of num2: ");
	scanf("%d",&num2);
	sum = num1+num2;
	sub = num1-num2;
	mult = num1*num2;
	div = num1/num2;
	printf("The addition of %d and %d is: %d\n",num1,num2,sum);
	printf("The subration of %d and %d is : %d\n",num1,num2,sub);
	printf("The multipliction of %d and %d is: %d\n",num1,num2,mult);
	printf("The divison of %d and %d is: %lf\n",num1,num2,div);
	return 0;
}
