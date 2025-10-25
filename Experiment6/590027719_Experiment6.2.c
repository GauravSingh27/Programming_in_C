/*6.2. WAP to read a list of integers and store it in a single dimensional array.
Write a C program to count and display positive, negative, odd, and even numbers in an array.*/
#include <stdio.h>
int main() {
printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------\n");
    int i,n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }

int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0;

for ( i = 0; i < n; i++) {
    if (arr[i] > 0)
        positiveCount++;
    else if (arr[i] < 0)
        negativeCount++;

    if (arr[i] % 2 == 0)
        evenCount++;
    else
        oddCount++;
}
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Odd numbers: %d\n", oddCount);
    printf("Even numbers: %d\n", evenCount);

    return 0;
}

