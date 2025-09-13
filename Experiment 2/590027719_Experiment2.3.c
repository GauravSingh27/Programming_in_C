/*3.WAP a C program to Calculate Compound Intrest*/
#include<stdio.h>
#include<math.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	double p,r,n,CI,x,y;
	printf("Enter the Principle amount:");
	scanf("%lf",&p);
	printf("Enter the Rate of intrest:");
	scanf("%lf",&r);
	printf("Enter the value on n:");
	scanf("%lf",&n);
	//x = 1+(r/100) ;
	//y = pow(x,n);
	
	CI = p*pow((1+(r/100)),n) - p;
//	CI = p*y - p;
	printf("COMPOUND INTREST:%.2lf",CI);
	return 0;
	
}
