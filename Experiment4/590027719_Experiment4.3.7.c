/*Experiment 4: Loops
4.3.7 Write a Program for this pattern.
12345
 1234
  123
   12
    1 */
#include <stdio.h>
int main() {
	
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int i, j, space;
    for (i = 5; i >= 1; i--) {
        for (space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

