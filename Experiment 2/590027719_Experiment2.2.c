/*2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the 
formula: F = (C * 9/5) + 32.*/
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	double F,C;
	printf("Enter Temperture in Celsius:");
	scanf("%lf",&C);
	F = (C*9/5)+32;
	printf("Temperture in Fahrenheit:%.2lf",F);
	
	return 0;
	
}
