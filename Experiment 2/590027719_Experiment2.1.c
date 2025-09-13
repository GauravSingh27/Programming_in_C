/*Experiment 2: Operator
1.WAP a C program to calculate the area ond perimeter of a rectangle based on its lenght and width.*/
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	int length, width, mul , per;
    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the width: ");
    scanf("%d", &width);

    mul = length * width;
    per = 2*(length+width);

    printf("Area of Rectangle is: %d\n",mul);
    printf("Perimeter of Rectangle is: %d\n",per);
    printf("thank you");

    return 0;
}
