/*
name: maurine indeche
reg no:CT101/G/23746/24
DATE:20/09/2024
program:program to add two numbers
*/
#include <stdio.h>
int main() {
    // variable declaration
    float principle, rate, time, intrest;
    //prompt user to enter amount
    printf("enter principle amount: ");
    scanf("%f", &principle);

    //prompt user to enter rate
    printf("enter rate: ");
    scanf("%f", &rate);

    //prompt user to enter time
    printf("enter time in years: ");
    scanf("%f", &time);

    //calculate simple intrest
    intrest = principle * rate/100 * time;

    //display intrest
    printf("\n the simple intrest is ksh. %.2f ", intrest);
    return 0;
}
