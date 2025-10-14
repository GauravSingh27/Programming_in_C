/*Experiment 4: Loops
4.3.4 Write a Program for this pattern.
1
21
321
4321
54321 */
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	int i,j;
	for(i=1 ; i <= 5 ; i++)
	{
		for(j=i ; j > 0 ; j--)
		{
			printf("%d",j);
			
			
		}
		printf("\n");
	}
}
