/*Experiment 4: Loops
4.3.9 Write a Program for this pattern.
          5
		5 4 5
	  5	4 3 4 5
	5 4 3 2 3 4 5
  5 4 3 2 1 2 3 4 5
    5 4 3 2 3 4 5
	  5	4 3 4 5
		5 4 5
		  5   */
		  
		  
#include <stdio.h>
int main()
{
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int n = 5, i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (j = n; j >= n - i + 1; j--)
            printf("%d ", j);
        for (j = n - i + 2; j <= n; j++)
            printf("%d ", j);
        
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (j = n; j >= n - i + 1; j--)
            printf("%d ", j);
        for (j = n - i + 2; j <= n; j++)
            printf("%d ", j);
        
        printf("\n");
    }

    return 0;
}

