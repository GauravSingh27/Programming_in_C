/*Experiment 4: Loops
4.3.8 Write a Program for this pattern.
    1
   121
  12321
 1234321
123454321
 1234321 
  12321
   121
    1  */
#include <stdio.h>
int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int i, j, space, n = 5;
    for (i = 1; i <= n; i++) {
       
        for (space = 1; space <= n - i; space++) {
            printf("  ");  
        }
        
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }


    for (i = n - 1; i >= 1; i--) {
        
        for (space = 1; space <= n - i; space++) {
            printf("  ");  
        }
        
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
      
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


