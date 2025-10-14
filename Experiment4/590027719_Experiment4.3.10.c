/*Experiment 4: Loops
4.3.10 Write a Program for this pattern.

5
4 5
3 4 5
2 3 4 5
1 2 3 4 5 */
#include <stdio.h>
int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int n = 5, i, j;

    for (i = n; i >= 1; i--) {
        for (j = i; j <= n; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

