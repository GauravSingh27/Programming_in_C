/*Experiment 4: Loops
4.3.1 Write a Program for this pattern.
1
22
333
4444
55555 */
#include<stdio.h>
int main()
{   
    printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
	int i,j;
	for(i=1 ; i <= 5 ; i++)
	{
		for(j=1 ; j <= i ; j++)
		{
			printf("%d",i);
			
		}
		printf("\n");
	}
}

