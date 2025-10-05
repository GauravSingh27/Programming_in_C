/*3.6.WAP using ternary operator, the user should input the length and breadth of a 
rectangle, one has to find out which rectangle has the highest perimeter. The 
minimum number of rectangles should be three.*/
#include <stdio.h>
int main() 
{   
    printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    
	int L1,B1,L2,B2,L3,B3,P1,P2,P3, MaxPerimeter, MaxRect;
	
	printf("Enter Length and breadth of 1 rectangle:");
	scanf("%d,%d",&L1,&B1);
	P1 = 2*(L1 + B1);
	printf("Enter Length and breadth of 2 rectangle:");
	scanf("%d,%d",&L2,&B2);
	P2 = 2*(L2 + B2);
	printf("Enter Length and breadth of 3 rectangle:");
	scanf("%d,%d",&L3,&B3);
	P3 = 2*(L3 + B3);

	MaxPerimeter = (P1 > P2) ? ((P1 > P3) ? P1 : P3) : ((P2 > P3) ? P2 : P3);
	MaxRect = (MaxPerimeter == P1) ? 1 : (MaxPerimeter == P2) ? 2 : 3;

    printf("Rectangle %d has the highest perimeter: %d\n", MaxRect, MaxPerimeter);

    return 0;
}

