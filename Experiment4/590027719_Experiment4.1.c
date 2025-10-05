/*Experiment 4:Loops
4.1.WAP to enter numbers till the user wants. At the end, it should display the 
count of positive, negative, and Zeroes entered.*/
#include <stdio.h>
int main() 
{   
    printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    int num;
    int p_c = 0, n_c = 0, z_c = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

    if (num > 0)
        p_c++;
        
    else if (num < 0)
        n_c++;
        
    else
        z_c++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 
        
    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of positive numbers: %d\n", p_c);
    printf("Count of negative numbers: %d\n", n_c);
    printf("Count of zeroes: %d\n", z_c);

return 0;
}

