/*3.3.WAP to compute the BMI Index of the person and print the BMI values as per the following ranges.
You can use the following formula to compute BMI=weight(kgs)/Height*Height(mts).*/
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	double h,w,BMI;
	printf("Enter your weight in kg:");
	scanf("%lf",&w);
	printf("Enter your height in meters:");
	scanf("%lf",&h);
	
	BMI = w / (h*h);
	if(BMI<=15){
		printf("Starvation");
	}else if(BMI>=15.1 && BMI<=17.5){
		printf("Anorexic");
	}else if(BMI>=17.6 && BMI<=18.5){
		printf("Underweight");
	}else if(BMI>=18.6 && BMI<=24.9){
		printf("Ideal");
	}else if(BMI>=25 && BMI<=29.9){
		printf("Obese");
	}else if(BMI>=30 && BMI<=39.9){
		printf("Overweight");
	}else if(BMI>=40){
		printf("Morbidly Obese");
	}
	return 0;
}
