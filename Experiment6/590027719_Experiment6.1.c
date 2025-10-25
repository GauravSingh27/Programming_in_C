/*Experiment 6: Array
6.1. WAP to read a list of integers and store it in a single dimensional array.
Write a C program to print the second largest integer in a list of integers.*/
#include <stdio.h>
int main() {
printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------\n");
    int i,n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("List should contain at least two integers.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }

    int maxIndex = 0;
    for ( i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int secondLargestIndex = -1;
    for ( i = 0; i < n; i++) {
        if (i != maxIndex) {
            if (secondLargestIndex == -1 || arr[i] > arr[secondLargestIndex]) {
                secondLargestIndex = i;
            }
        }
    }

    if (secondLargestIndex == -1) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The second largest integer is: %d\n", arr[secondLargestIndex]);
    }

    return 0;
}


