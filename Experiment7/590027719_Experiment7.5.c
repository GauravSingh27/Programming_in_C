/*5.Develop a function REVERSE (str) that accepts a string argument. Write a C 
program that invokes this function to find the reverse of a given string.*/
#include <stdio.h>
#include <string.h>
void REVERSE(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    REVERSE(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

