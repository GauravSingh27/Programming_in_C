/*Experiment 4: Loops
4.3.11 Write a Program for this pattern.

1 2 3 4 5
2 3 4 5
3 4 5
4 5
5 
*/
#include<stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	int i,j;
	for(i=1 ; i <= 5 ; i++)
	{
		for(j=i ; j <= 5 ; j++)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
	return 0;
}
