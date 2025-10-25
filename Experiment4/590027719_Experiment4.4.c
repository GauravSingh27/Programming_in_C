/*Experiment 4: Loops
4.4. The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years.
Write a program to determine the population at the end of each year in the last decade.*/
#include<stdio.h>
int main(){
	printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    float population = 100000;  
    float rate = 0.10;           
    int year;

    printf("Year\tPopulation\n");
    printf("--------------------\n");
    
    for (year = 1; year <= 10; year++) {
        population = population + (population * rate); 
        printf("%d\t%.0f\n", year, population);
    }

    return 0;
}

