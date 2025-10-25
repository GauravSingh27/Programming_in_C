/*5.2. Declare a local variable inside a function and try to access it outside the function.
Compare this with accessing the global variable from within the function.*/
#include <stdio.h>
int globalVar = 50;

void myFunction() {
    int localVar = 100;

    printf("Inside myFunction(): localVar = %d\n", localVar);
    printf("Inside myFunction(): globalVar = %d\n", globalVar);
}

int main() {
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    myFunction();

    printf("Inside main(): globalVar = %d\n", globalVar);

    return 0;
}

