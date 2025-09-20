/*Experiment 3 : Conditional Statements
3.1.Write a  C program to check whether a number is Even or Odd*/
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
	
	int n,x;
	printf("Enter a number:");
	scanf("%d",&n);
	x=(n%2);
	if(x==0)
	{ 
	printf("%d is an Even number",n);
	}else{
	printf("%d is an Odd number",n);
    }
    return 0;
}  
