/*Experiment 4: Loops
4.3.6 Write a Program for this pattern.
54321
4321
321
21
1 */
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	int i,j;
	for(i=5 ; i >= 1 ; i--)
	{
		for(j=i ; j >= 1 ; j--)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
	return 0;
}
