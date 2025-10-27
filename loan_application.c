/*author geoofrey muthoka
reg no:CT101/G/24436/24
DATE:20/09/2024
program:program to add two numbers
*/
#include <stdio.h>
int main() {
    //variable declaration
    int age;
    int income;
    //prompt user to enter age
    printf("enter your age: ");
    scanf("%d", &age);
    //prompt user to enter income
    printf("enter your annual income:  ");
    scanf("%d", &income);
    //check eligibility
    if (age >=21 && income >=21000){
        printf("congratulations you qualify for a loan");
    } else {
        printf("unfortunately, we are unable to offer you a loan at this time.");
    }
    return 0;
}