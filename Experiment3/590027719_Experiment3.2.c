/*3.2.WAP to check if the triangle is valid or not.If the validity is established,do check if the triangle is isosceles, equilateral, right angle,or scalene.
Take sides of the triangle as input from a user.*/
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
	
	int a,b,c,hypotenuse,perpendicular,base;
	printf("Enter side a:");
	scanf("%d",&a);
	printf("Enter side b:");
	scanf("%d",&b);
	printf("Enter side c:");
	scanf("%d",&c);
	
	if((a>b)&&(a>c)){
		hypotenuse = a;
		perpendicular = b;
		base = c;
	}else if((b>a)&&(b>c)){
		hypotenuse = b;
		perpendicular = a;
		base = c;
	} if ((c>a)&&(c>b)){
		hypotenuse = c;
		perpendicular = a;
		base = b;
	}
	
   if ((a+b>c)&&(a+c>b)&&(b+c>a)){
    	printf("This triangle is valid\n");
	}
	if (((a+b)>c)||((b+c)>a)||((a+c)>b)){
		if((a==b)&&(b==c)){
			printf("This is an Equilateral triangle");
		}else if((a==b)||(b==c)||(a==c)){
			printf("This is an Isosceles triangle");
		}else if((hypotenuse*hypotenuse)==(perpendicular*perpendicular)+(base*base))
		{
			printf("This is an Right angled triangle");
		}else
		{
			printf("This is an Scalene triangle");
		}
	}
	return 0;
}
