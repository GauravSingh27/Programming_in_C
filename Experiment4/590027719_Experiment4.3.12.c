/*Experiment 4: Loops
4.3.12 Write a Program for this pattern.

54321
 5432
  543
   54
    5 */
#include <stdio.h>
int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int n = 5, i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = n; j > i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

