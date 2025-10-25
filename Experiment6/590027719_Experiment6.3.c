/*6.3. WAP to read a list of integers and store it in a single dimensional array.
Write a C program to find the frequency of a particular number in a list of integers.*/
#include <stdio.h>
int main() {
printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------\n");
    int i,n, num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    int frequency = 0;
    for ( i = 0; i < n; i++) {
        if (arr[i] == num) {
        frequency++;
        }
    }

    printf("Frequency of %d is: %d\n", num, frequency);

    return 0;
}

