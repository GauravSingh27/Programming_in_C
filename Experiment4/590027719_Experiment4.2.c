/* WAP to print the multiplication table of the number entered by the user. It 
should be in the correct formatting.   Num * 1 = Num */
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int num, i;

    printf("Enter a number for multiplication table:");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) 
	{
    printf("%d * %d = %d\n", num, i, num * i);
    }
   return 0;
}

