/*4.Write a program to find the roots of the quadratic equations.*/
#include <stdio.h>
#include <math.h>

int main()
 {  
    printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
	
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter cofficient a:");
	scanf("%lf",&a);
    printf("Enter cofficient b:");
	scanf("%lf",&b);
	printf("Enter cofficient c:");
	scanf("%lf",&c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Roots are real and distinct:\n");
    printf("Root 1 = %.2lf\n", root1);
    printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
    root1 = -b / (2 * a);
    printf("Roots are real and equal:\n");
    printf("Root = %.2lf\n", root1);
    } else {
    realPart = -b / (2 * a);
    imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("Roots are complex and imaginary:\n");
    printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
    printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}

